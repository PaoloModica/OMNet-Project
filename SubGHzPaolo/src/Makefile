#
# OMNeT++/OMNEST Makefile for SubGHzPaolo
#
# This file was generated with the command:
#  opp_makemake -f --deep -I../../inetmanet-2.0/src/util/headerserializers/ipv4 -I../../inetmanet-2.0/src/wpan/linklayer/ieee802154/contract -I../../inetmanet-2.0/src -I../../inetmanet-2.0/src/networklayer/common -I../../inetmanet-2.0/src/util/headerserializers -I../../inetmanet-2.0/src/battery/models -I../../inetmanet-2.0/src/networklayer/manetrouting/dsr -I../../inetmanet-2.0/src/linklayer/radio/propagation -I../../inetmanet-2.0/src/networklayer/contract -I../../inetmanet-2.0/src/transport/tcp_common -I../../inetmanet-2.0/src/wpan/networklayer/contract -I../../inetmanet-2.0/src/linklayer/common -I../../inetmanet-2.0/src/util/headerserializers/ipv6 -I../../inetmanet-2.0/src/world/obstacles -I../../inetmanet-2.0/src/linklayer/ieee80211/radio -I../../inetmanet-2.0/src/networklayer/manetrouting/base -I../../inetmanet-2.0/src/networklayer/autorouting/ipv4 -I../../inetmanet-2.0/src/util/headerserializers/tcp -I../../inetmanet-2.0/src/networklayer/arp -I../../inetmanet-2.0/src/transport/sctp -I../../inetmanet-2.0/src/util/headerserializers/sctp -I../../inetmanet-2.0/src/base -I../../inetmanet-2.0/src/networklayer/ipv6tunneling -I../../inetmanet-2.0/src/wpan/linklayer/bmac -I../../inetmanet-2.0/src/wpan/linklayer/ieee802154/mac -I../../inetmanet-2.0/src/linklayer/contract -I../../inetmanet-2.0/src/world/radio -I../../inetmanet-2.0/src/linklayer/ieee80211/mac -I../../inetmanet-2.0/src/transport/udp -I../../inetmanet-2.0/src/applications/pingapp -I../../inetmanet-2.0/src/networklayer/ipv6 -I../../inetmanet-2.0/src/linklayer/radio -I../../inetmanet-2.0/src/transport/contract -I../../inetmanet-2.0/src/networklayer/icmpv6 -I../../inetmanet-2.0/src/mobility/contract -I../../inetmanet-2.0/src/networklayer/routing/aodv -I../../inetmanet-2.0/src/world/powercontrol -I../../inetmanet-2.0/src/linklayer/ethernet -I../../inetmanet-2.0/src/util/headerserializers/udp -I../../inetmanet-2.0/src/linklayer/ieee80211mesh/locator -I../../inetmanet-2.0/src/linklayer/ieee80211/mgmt -I../../inetmanet-2.0/src/networklayer/ipv4 -I../../inetmanet-2.0/src/mobility/common -I../../inetmanet-2.0/src/wpan/phyLayer/ieee802154 -I../../inetmanet-2.0/src/linklayer/ieee80211/radio/errormodel -I../../inetmanet-2.0/src/util -I../../inetmanet-2.0/src/status -I../../inetmanet-2.0/src/networklayer/xmipv6 -L../../inetmanet-2.0/out/$$\(CONFIGNAME\)/src -linet -DINET_IMPORT -KINETMANET_2_0_PROJ=../../inetmanet-2.0
#

# Name of target to be created (-o option)
TARGET = SubGHzPaolo$(EXE_SUFFIX)

# User interface (uncomment one) (-u option)
USERIF_LIBS = $(ALL_ENV_LIBS) # that is, $(TKENV_LIBS) $(CMDENV_LIBS)
#USERIF_LIBS = $(CMDENV_LIBS)
#USERIF_LIBS = $(TKENV_LIBS)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I../../inetmanet-2.0/src/util/headerserializers/ipv4 \
    -I../../inetmanet-2.0/src/wpan/linklayer/ieee802154/contract \
    -I../../inetmanet-2.0/src \
    -I../../inetmanet-2.0/src/networklayer/common \
    -I../../inetmanet-2.0/src/util/headerserializers \
    -I../../inetmanet-2.0/src/battery/models \
    -I../../inetmanet-2.0/src/networklayer/manetrouting/dsr \
    -I../../inetmanet-2.0/src/linklayer/radio/propagation \
    -I../../inetmanet-2.0/src/networklayer/contract \
    -I../../inetmanet-2.0/src/transport/tcp_common \
    -I../../inetmanet-2.0/src/wpan/networklayer/contract \
    -I../../inetmanet-2.0/src/linklayer/common \
    -I../../inetmanet-2.0/src/util/headerserializers/ipv6 \
    -I../../inetmanet-2.0/src/world/obstacles \
    -I../../inetmanet-2.0/src/linklayer/ieee80211/radio \
    -I../../inetmanet-2.0/src/networklayer/manetrouting/base \
    -I../../inetmanet-2.0/src/networklayer/autorouting/ipv4 \
    -I../../inetmanet-2.0/src/util/headerserializers/tcp \
    -I../../inetmanet-2.0/src/networklayer/arp \
    -I../../inetmanet-2.0/src/transport/sctp \
    -I../../inetmanet-2.0/src/util/headerserializers/sctp \
    -I../../inetmanet-2.0/src/base \
    -I../../inetmanet-2.0/src/networklayer/ipv6tunneling \
    -I../../inetmanet-2.0/src/wpan/linklayer/bmac \
    -I../../inetmanet-2.0/src/wpan/linklayer/ieee802154/mac \
    -I../../inetmanet-2.0/src/linklayer/contract \
    -I../../inetmanet-2.0/src/world/radio \
    -I../../inetmanet-2.0/src/linklayer/ieee80211/mac \
    -I../../inetmanet-2.0/src/transport/udp \
    -I../../inetmanet-2.0/src/applications/pingapp \
    -I../../inetmanet-2.0/src/networklayer/ipv6 \
    -I../../inetmanet-2.0/src/linklayer/radio \
    -I../../inetmanet-2.0/src/transport/contract \
    -I../../inetmanet-2.0/src/networklayer/icmpv6 \
    -I../../inetmanet-2.0/src/mobility/contract \
    -I../../inetmanet-2.0/src/networklayer/routing/aodv \
    -I../../inetmanet-2.0/src/world/powercontrol \
    -I../../inetmanet-2.0/src/linklayer/ethernet \
    -I../../inetmanet-2.0/src/util/headerserializers/udp \
    -I../../inetmanet-2.0/src/linklayer/ieee80211mesh/locator \
    -I../../inetmanet-2.0/src/linklayer/ieee80211/mgmt \
    -I../../inetmanet-2.0/src/networklayer/ipv4 \
    -I../../inetmanet-2.0/src/mobility/common \
    -I../../inetmanet-2.0/src/wpan/phyLayer/ieee802154 \
    -I../../inetmanet-2.0/src/linklayer/ieee80211/radio/errormodel \
    -I../../inetmanet-2.0/src/util \
    -I../../inetmanet-2.0/src/status \
    -I../../inetmanet-2.0/src/networklayer/xmipv6 \
    -I.

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS = -L../../inetmanet-2.0/out/$(CONFIGNAME)/src  -linet
LIBS += -Wl,-rpath,`abspath ../../inetmanet-2.0/out/$(CONFIGNAME)/src`

# Output directory
PROJECT_OUTPUT_DIR = ../out
PROJECTRELATIVE_PATH = src
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = $O/SubGHzPhy.o $O/SubGHzRadioModel.o $O/periodicAppLayer.o

# Message files
MSGFILES =

# Other makefile variables (-K)
INETMANET_2_0_PROJ=../../inetmanet-2.0

#------------------------------------------------------------------------------

# Pull in OMNeT++ configuration (Makefile.inc or configuser.vc)

ifneq ("$(OMNETPP_CONFIGFILE)","")
CONFIGFILE = $(OMNETPP_CONFIGFILE)
else
ifneq ("$(OMNETPP_ROOT)","")
CONFIGFILE = $(OMNETPP_ROOT)/Makefile.inc
else
CONFIGFILE = $(shell opp_configfilepath)
endif
endif

ifeq ("$(wildcard $(CONFIGFILE))","")
$(error Config file '$(CONFIGFILE)' does not exist -- add the OMNeT++ bin directory to the path so that opp_configfilepath can be found, or set the OMNETPP_CONFIGFILE variable to point to Makefile.inc)
endif

include $(CONFIGFILE)

# Simulation kernel and user interface libraries
OMNETPP_LIB_SUBDIR = $(OMNETPP_LIB_DIR)/$(TOOLCHAIN_NAME)
OMNETPP_LIBS = -L"$(OMNETPP_LIB_SUBDIR)" -L"$(OMNETPP_LIB_DIR)" -loppmain$D $(USERIF_LIBS) $(KERNEL_LIBS) $(SYS_LIBS)

COPTS = $(CFLAGS) -DINET_IMPORT $(INCLUDE_PATH) -I$(OMNETPP_INCL_DIR)
MSGCOPTS = $(INCLUDE_PATH)

# we want to recompile everything if COPTS changes,
# so we store COPTS into $COPTS_FILE and have object
# files depend on it (except when "make depend" was called)
COPTS_FILE = $O/.last-copts
ifneq ($(MAKECMDGOALS),depend)
ifneq ("$(COPTS)","$(shell cat $(COPTS_FILE) 2>/dev/null || echo '')")
$(shell $(MKPATH) "$O" && echo "$(COPTS)" >$(COPTS_FILE))
endif
endif

#------------------------------------------------------------------------------
# User-supplied makefile fragment(s)
# >>>
# <<<
#------------------------------------------------------------------------------

# Main target
all: $O/$(TARGET)
	$(Q)$(LN) $O/$(TARGET) .

$O/$(TARGET): $(OBJS)  $(wildcard $(EXTRA_OBJS)) Makefile
	@$(MKPATH) $O
	@echo Creating executable: $@
	$(Q)$(CXX) $(LDFLAGS) -o $O/$(TARGET)  $(OBJS) $(EXTRA_OBJS) $(AS_NEEDED_OFF) $(WHOLE_ARCHIVE_ON) $(LIBS) $(WHOLE_ARCHIVE_OFF) $(OMNETPP_LIBS)

.PHONY: all clean cleanall depend msgheaders

.SUFFIXES: .cc

$O/%.o: %.cc $(COPTS_FILE)
	@$(MKPATH) $(dir $@)
	$(qecho) "$<"
	$(Q)$(CXX) -c $(CXXFLAGS) $(COPTS) -o $@ $<

%_m.cc %_m.h: %.msg
	$(qecho) MSGC: $<
	$(Q)$(MSGC) -s _m.cc $(MSGCOPTS) $?

msgheaders: $(MSGFILES:.msg=_m.h)

clean:
	$(qecho) Cleaning...
	$(Q)-rm -rf $O
	$(Q)-rm -f SubGHzPaolo SubGHzPaolo.exe libSubGHzPaolo.so libSubGHzPaolo.a libSubGHzPaolo.dll libSubGHzPaolo.dylib
	$(Q)-rm -f ./*_m.cc ./*_m.h

cleanall: clean
	$(Q)-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(qecho) Creating dependencies...
	$(Q)$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/SubGHzPhy.o: SubGHzPhy.cc \
	SubGHzPhy.h \
	SubGHzRadioModel.h \
	$(INETMANET_2_0_PROJ)/src/base/BasicModule.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/INotifiable.h \
	$(INETMANET_2_0_PROJ)/src/base/LifecycleOperation.h \
	$(INETMANET_2_0_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/NodeOperations.h \
	$(INETMANET_2_0_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_2_0_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_2_0_PROJ)/src/battery/models/BasicBattery.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/PhyControlInfo_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/RadioState.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/radio/AirFrame_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/radio/INoiseGenerator.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/radio/IRadioModel.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/radio/ModulationType.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/radio/Radio.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/radio/Radio80211aControlInfo_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/radio/SnrList.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/radio/propagation/IReceptionModel.h \
	$(INETMANET_2_0_PROJ)/src/status/NodeStatus.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h \
	$(INETMANET_2_0_PROJ)/src/world/annotations/AnnotationManager.h \
	$(INETMANET_2_0_PROJ)/src/world/obstacles/Obstacle.h \
	$(INETMANET_2_0_PROJ)/src/world/obstacles/ObstacleControl.h \
	$(INETMANET_2_0_PROJ)/src/world/radio/ChannelAccess.h \
	$(INETMANET_2_0_PROJ)/src/world/radio/IChannelControl.h \
	$(INETMANET_2_0_PROJ)/src/wpan/linklayer/ieee802154/contract/Ieee802154Const.h \
	$(INETMANET_2_0_PROJ)/src/wpan/linklayer/ieee802154/contract/Ieee802154Def.h \
	$(INETMANET_2_0_PROJ)/src/wpan/linklayer/ieee802154/contract/Ieee802154Enum.h \
	$(INETMANET_2_0_PROJ)/src/wpan/linklayer/ieee802154/contract/Ieee802154MacPhyPrimitives_m.h
$O/SubGHzRadioModel.o: SubGHzRadioModel.cc \
	SubGHzPhy.h \
	SubGHzRadioModel.h \
	$(INETMANET_2_0_PROJ)/src/base/BasicModule.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/INotifiable.h \
	$(INETMANET_2_0_PROJ)/src/base/LifecycleOperation.h \
	$(INETMANET_2_0_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/NodeOperations.h \
	$(INETMANET_2_0_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_2_0_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_2_0_PROJ)/src/battery/models/BasicBattery.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/PhyControlInfo_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/RadioState.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/radio/AirFrame_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/radio/INoiseGenerator.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/radio/IRadioModel.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/radio/ModulationType.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/radio/Radio.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/radio/Radio80211aControlInfo_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/radio/SnrList.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/radio/propagation/IReceptionModel.h \
	$(INETMANET_2_0_PROJ)/src/status/NodeStatus.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h \
	$(INETMANET_2_0_PROJ)/src/world/annotations/AnnotationManager.h \
	$(INETMANET_2_0_PROJ)/src/world/obstacles/Obstacle.h \
	$(INETMANET_2_0_PROJ)/src/world/obstacles/ObstacleControl.h \
	$(INETMANET_2_0_PROJ)/src/world/radio/ChannelAccess.h \
	$(INETMANET_2_0_PROJ)/src/world/radio/IChannelControl.h \
	$(INETMANET_2_0_PROJ)/src/wpan/linklayer/ieee802154/contract/Ieee802154Const.h \
	$(INETMANET_2_0_PROJ)/src/wpan/linklayer/ieee802154/contract/Ieee802154Def.h \
	$(INETMANET_2_0_PROJ)/src/wpan/linklayer/ieee802154/contract/Ieee802154Enum.h \
	$(INETMANET_2_0_PROJ)/src/wpan/linklayer/ieee802154/contract/Ieee802154MacPhyPrimitives_m.h
$O/periodicAppLayer.o: periodicAppLayer.cc \
	periodicAppLayer.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/PhyControlInfo_m.h \
	$(INETMANET_2_0_PROJ)/src/wpan/linklayer/ieee802154/contract/Ieee802154Const.h \
	$(INETMANET_2_0_PROJ)/src/wpan/linklayer/ieee802154/contract/Ieee802154Def.h \
	$(INETMANET_2_0_PROJ)/src/wpan/linklayer/ieee802154/contract/Ieee802154Enum.h \
	$(INETMANET_2_0_PROJ)/src/wpan/linklayer/ieee802154/contract/Ieee802154MacPhyPrimitives_m.h

