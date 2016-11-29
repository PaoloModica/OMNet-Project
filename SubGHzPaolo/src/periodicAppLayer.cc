//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

#include "periodicAppLayer.h"
#include "Ieee802154Enum.h"
#include "Ieee802154MacPhyPrimitives_m.h"

Define_Module(PeriodicAppLayer);

void PeriodicAppLayer::initialize() {
    lowerLayerIn = gate("lowerLayerIn");
    lowerLayerOut = gate("lowerLayerOut");
    maxChannel = par("maxChannel");
    isTransmitter= par("isTransmitter").boolValue();

    period = par("period").doubleValue();
    startTime = par("startTime").doubleValue();

    totbit = 0;
    //distinzione del comportamento dei nodi- come da progetto - Elaborato 1
    if(isTransmitter){
        setTxMode();
        cMessage *tim = new cMessage("StartTimer");
        scheduleAt(period, tim);
    }else{
        setRxMode();
    }
}

//metodo per la creazione e l'invio di un pacchetto dati - come da progetto - Elaborato 1

void PeriodicAppLayer::transmitDataFrame() {
        cPacket *pkt = new cPacket("pkt");
        pkt->setBitLength(1024);
        send(pkt, lowerLayerOut);
}


void PeriodicAppLayer::handleMessage(cMessage *msg) {
    if(msg->isSelfMessage()) {
      handleSelfMessage(msg);
        return;

    }

    if(!msg->isPacket() && msg->getArrivalGate() == lowerLayerIn) {
        handlePhyPrimitive(msg);
        return;
    }
    //gestione dei pacchetti dati in ingresso - come da progetto - Elaborato 1

    if(msg->isPacket() && msg->getArrivalGate() == lowerLayerIn && !isTransmitter){
        cPacket *pkt_rcv = dynamic_cast<cPacket *>(msg);
        totbit += pkt_rcv->getBitLength();
        if(pkt_rcv->getKind()==PACKETOK){
            EV <<"Nodo trasmette: " <<totbit <<" bit"<<endl;
            simsignal_t sig = registerSignal("Throughput");
            double thr = (double)(totbit/simTime().dbl());
            EV <<"Nodo cronometra: " <<simTime().dbl() <<" secondi"<<endl;
            EV <<"Nodo misura: " <<thr <<" bit/s"<<endl;
            emit(sig, thr);
            sig = registerSignal("Latency");
            emit(sig, simTime().dbl() - pkt_rcv->getSendingTime());
        }
        delete pkt_rcv;
    }
}

void PeriodicAppLayer::handleSelfMessage(cMessage *msg) {

    if(strcmp(msg->getName(), "TxTimer") == 0) {
               transmitDataFrame();
               scheduleAt(simTime()+period, msg);
               return;
            } else if(strcmp(msg->getName(), "StartTimer") == 0) {
                EV<< "Tipo pacchetto"<<msg->getName();
                delete msg;
                cMessage *txtimer = new cMessage("TxTimer");
                scheduleAt(simTime()+period, txtimer);
                return;
            }
            error("Unknown timer");
}

void PeriodicAppLayer::setTxMode() {
    rxMode = false;
    isTransmitter = true;
    PLME_SET_TRX_STATE_request(phy_FORCE_TRX_OFF);
    return;
}

void PeriodicAppLayer::setRxMode() {
    rxMode = true;
    isTransmitter = false;
    PLME_SET_TRX_STATE_request(phy_FORCE_TRX_OFF);
    return;
}

void PeriodicAppLayer::setChannel(int channel, bool rx) {
    if(channel < 11 || channel > 26) error("Invalid channel arguments");
    rxMode = rx;
    currentChannel = channel;
    Ieee802154MacPhyPrimitives *primitive = new Ieee802154MacPhyPrimitives();
    primitive->setKind(PLME_SET_REQUEST);
    primitive->setAttribute(PHY_CURRENT_CHANNEL);
    primitive->setChannelNumber(currentChannel);
    send(primitive, lowerLayerOut);
    return;
}

void PeriodicAppLayer::handlePhyPrimitive(cMessage *msg) {
    Ieee802154MacPhyPrimitives* primitive = check_and_cast<Ieee802154MacPhyPrimitives *>(msg);
    switch(primitive->getKind()) {
        case PLME_SET_CONFIRM: {
            if(primitive->getStatus() == phy_SUCCESS) {
                PLME_SET_TRX_STATE_request(phy_FORCE_TRX_OFF);
            }
            delete primitive;
        } return;
        case PLME_SET_TRX_STATE_CONFIRM: {
            switch(primitive->getStatus()) {
                case phy_SUCCESS:
                case phy_RX_ON:
                case phy_TX_ON:
                    delete primitive;
                    return;
                case phy_TRX_OFF:
                    if(!rxMode) {
                        PLME_SET_TRX_STATE_request(phy_TX_ON);
                    } else {
                        PLME_SET_TRX_STATE_request(phy_RX_ON);
                    }
                    delete primitive;
                    return;
                default:
                    error("TRX state: %d not supported", primitive->getStatus());
            }
        } return;
        case PD_DATA_CONFIRM: {
          //  handleTxConfirm((PHYenum)primitive->getStatus());
            delete primitive;
//            setRxMode();
        } return;
        case PLME_CCA_CONFIRM: {
           // handlePhyCCAConfirm((PHYenum)primitive->getStatus());
            delete primitive;
        } return;
        default:
            error("Primitive not managed");
    }
}

void PeriodicAppLayer::PLME_SET_TRX_STATE_request(PHYenum status) {
    Ieee802154MacPhyPrimitives *primitive = new Ieee802154MacPhyPrimitives();
    primitive->setKind(PLME_SET_TRX_STATE_REQUEST);
    primitive->setStatus(status);
    send(primitive, lowerLayerOut);
    return;
}

void PeriodicAppLayer::handleTxConfirm(PHYenum res) {
    //TODO This function must be overrided
    return;
}


