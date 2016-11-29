#ifndef __SUBGHZPAOLO_SUBGHZRADIOMODEL_H_
#define __SUBGHZPAOLO_SUBGHZRADIOMODEL_H_
#include "IRadioModel.h"
#include <omnetpp.h>
//#include "SubGHzPhy.h"
#include "BasicBattery.h"
#include "PhyControlInfo_m.h"
#include "Radio80211aControlInfo_m.h"
#include "NodeStatus.h"
#include "NodeOperations.h"

#include <omnetpp.h>
#include "Radio.h"
#include "RadioState.h"
#include "Ieee802154Const.h"
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

/**
 * TODO - Generated class
 */

class INET_API SubGHzRadioModel : public IRadioModel
{
  protected:
    double snirThreshold;
    cModule *ownerRadioModule;
    //statistics
    //int collision;                    //modifica
    int HeaderLength;
  public:
    virtual void initializeFrom(cModule *radioModule);
    virtual void setHeaderLength(int hl);                   //modifica
    virtual double calculateDuration(AirFrame *airframe);

    virtual PhyIndication isReceivedCorrectly(AirFrame *airframe, const SnrList& receivedList);
    // used by the Airtime Link Metric computation
    virtual bool haveTestFrame() {return false;}
    virtual double calculateDurationTestFrame(AirFrame *airframe) {return 0;}
    virtual double getTestFrameError(double snirMin, double bitrate) {return 0;}
    virtual int    getTestFrameSize() {return 0;}
  protected:
    // utility
    virtual bool packetOk(double snirMin, int lengthMPDU, double bitrate);
    // utility
    virtual double dB2fraction(double dB);

};

#endif
