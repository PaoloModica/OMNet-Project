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


package subghz.simulations;

import inet.wpan.nodes.Ieee802154Node;
import inet.world.radio.ChannelControl;
import subghz.SubGHzNode;


network Rete2
{
    parameters:
        double numHosts;
        @display("bgb=281,308");

    submodules:
        channelControl: ChannelControl {
            parameters:
                @display("p=-65,20;i=misc/sun");
        }
        transmitter: SubGHzNode {
            @display("p=53,135");
        }
        receiver: SubGHzNode {
            @display("p=213,139");
        }
        transmitter2: SubGHzNode {
            @display("p=53,57");
        }
        receiver2: SubGHzNode {
            @display("p=210,57");
        }
    connections allowunconnected:
}
