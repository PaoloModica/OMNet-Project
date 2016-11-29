package subghz;

//
// TODO auto-generated module
//
simple PeriodicAppLayer
{
        parameters:
    	@display("i=block/source");
    	double period @unit(s);
    	double startTime @unit(s);
    	int payloadSize = default(32);
    	int maxChannel=default(2);
        bool isTransmitter;
    	
    	@statistic[Throughput](record=vector, last);
    	@statistic[Latency](record=vector);
   
    
    gates:
        input lowerLayerIn;
        output lowerLayerOut; 
    
    
}
