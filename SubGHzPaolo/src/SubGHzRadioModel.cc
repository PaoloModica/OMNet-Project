#include "SubGHzRadioModel.h"
#include "Ieee802154Const.h"
#include "FWMath.h"
#include "SubGHzPhy.h"
#include "BasicBattery.h"
#include "PhyControlInfo_m.h"
#include "Radio80211aControlInfo_m.h"
#include "NodeStatus.h"
#include "NodeOperations.h"
#include "ccomponent.h"


#include <omnetpp.h>
#include "Radio.h"
#include "RadioState.h"

#include "Ieee802154Def.h"
#include "Ieee802154Enum.h"
#include "Ieee802154MacPhyPrimitives_m.h"
#include "AirFrame_m.h"
#include "IRadioModel.h"
#include "IReceptionModel.h"
#include "FWMath.h"
#include "NotificationBoard.h"
#include "NotifierConsts.h"
#include "ObstacleControl.h"
#include "ILifecycle.h"
#include "INoiseGenerator.h"

Register_Class(SubGHzRadioModel);

static const double BER_LOWER_BOUND = 1e-10;

void SubGHzRadioModel::initializeFrom(cModule *radioModule)
{
    // read from Ieee802154phy

    EV<<"Entrata su initializeFrom"<<endl;
    EV<<"Header= "<<HeaderLength<<endl;
    snirThreshold = dB2fraction(radioModule->par("snirThreshold").doubleValue());
    ownerRadioModule = radioModule;
}

//funzione per l'impostazione della headerLength - come da progetto - Elaborato 1

void SubGHzRadioModel::setHeaderLength(int hl)
{
    HeaderLength = hl;
    EV<<"Entrata su setHeaderLength"<<endl;
    EV<<"Nuova HeaderLength= "<<HeaderLength<<endl;
}

double SubGHzRadioModel::calculateDuration(AirFrame *airframe)
{
    EV<<"Entrata su calculateDuration"<<endl;
    return ((this->HeaderLength)*8 + airframe->getBitLength())/airframe->getBitrate() ; //
}


PhyIndication SubGHzRadioModel::isReceivedCorrectly(AirFrame *airframe, const SnrList& receivedList)
{
    EV<<"Entrata su isReceivedCorrectly"<<endl;
    // calculate snirMin
    double snirMin = receivedList.begin()->snr;
    for (SnrList::const_iterator iter = receivedList.begin(); iter != receivedList.end(); iter++)
        if (iter->snr < snirMin)
            snirMin = iter->snr;
    cPacket *frame = airframe->getEncapsulatedPacket();
    EV << "packet (" << frame->getClassName() << ")" << frame->getName() << " (" << frame->info() << ") snrMin=" << snirMin << endl;

    if (snirMin <= snirThreshold)
    {
        // if snir is too low for the packet to be recognized
        EV << "COLLISION! Packet got lost\n";
        //collision++;
        //return ((PhyIndication)collision);
        return COLLISION;
    }
    if (!packetOk(snirMin, frame->getBitLength(), airframe->getBitrate()))
    {
        EV << "Packet has BIT ERRORS! It is lost!\n";
        return BITERROR;
    }
    /*else if (packetOk(snirMin, airframe->getEncapsulatedMsg()->length(), airframe->getBitrate()))
    {
        EV << "packet was received correctly, it is now handed to upper layer...\n";
        return true;
    }
    else
    {
        EV << "Packet has BIT ERRORS! It is lost!\n";
        return false;
    }*/

    return FRAMEOK;
}

bool SubGHzRadioModel::packetOk(double snirMin, int lengthMPDU, double bitrate)
{
    if (ownerRadioModule->par("NoBitError"))
            return true;

    double errorHeader;

    double  ber = std::max(0.5 * exp(-snirMin /2), BER_LOWER_BOUND);
    errorHeader = 1.0 - pow((1.0 - ber), HeaderLength*8);

    double MpduError = 1.0 - pow((1.0 - ber), lengthMPDU);

    EV << "ber: " << ber << endl;
    // double rand = dblrand();

    if (dblrand() < errorHeader)
        return false; // error in header
    else if (dblrand() < MpduError)
        return false;  // error in MPDU
    else
        return true; // no error
}



double SubGHzRadioModel::dB2fraction(double dB)
{
    return pow(10.0, (dB / 10));
}

