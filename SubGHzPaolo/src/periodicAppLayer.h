//
///
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

#ifndef __SUBGHZPAOLO_PERIODICAPPLAYER_H_
#define __SUBGHZPAOLO_PERIODICAPPLAYER_H_

#include <omnetpp.h>
#include "Ieee802154MacPhyPrimitives_m.h"
/**
 * TODO - Generated class
 */
class PeriodicAppLayer : public cSimpleModule
{
  private:
    simsignal_t sig;
    simsignal_t sig2;
  protected:
    //gate
    cGate *lowerLayerIn;
    cGate *lowerLayerOut;
    //variabili di stato
    bool rxMode;
    bool isTransmitter;
    int currentChannel;
    int maxChannel;


    virtual void initialize();
    virtual void handleMessage(cMessage *msg);
    virtual void handleSelfMessage(cMessage *msg);
    virtual void transmitDataFrame();

    //Physical Mode
    virtual void setTxMode();
    virtual void setRxMode();
    virtual void setChannel(int channel, bool rx);
    virtual void handlePhyPrimitive(cMessage *msg);
    virtual void PLME_SET_TRX_STATE_request(PHYenum status);
    virtual void handleTxConfirm(PHYenum res);

    simtime_t period;
    simtime_t startTime;


    long totbit;
};

#endif
