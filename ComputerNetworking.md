# Computer Networking

### **How does the Internet work?**

#### **Internet Addresses** :

Because the Internet is a global network of computers each computer connected to the Internet must have a unique address. Internet addresses are in the form **nnn.nnn.nnn.nnn** where nnn must be a number from 0 - 255. This address is known as an IP address. (IP stands for Internet Protocol)

#### **Packets**
When data gets sent over the Internet, it is first broken up into smaller packets, which are then translated into bits. The packets get routed to their destination by various networking devices such as routers and switches. When the packets arrive at their destination, the receiving device reassembles the packets in order and can then use or display the data.

#### **Protocols** : 

There are protocols for sending packets between devices on the same network (Ethernet), for sending packets from network to network (IP), for ensuring those packets successfully arrive in order (TCP), and for formatting data for websites and applications (HTTP). In addition to these foundational protocols, there are also protocols for routing, testing, and encryption. And there are alternatives to the protocols listed above for different types of content — for instance, streaming video often uses UDP instead of TCP.

#### **Port Numbers** :
consists of 16 bit numbers, so no of possible combinations are 2^16.

1-1023 -> reserved like 80 for http.

1024-49152 -> reserved for applications like mongodb - 27017 , sql - 1433.

remaining -> are vacant for your use.

#### ***Some Hidden Facts***
1 mbps - 10^6 bits/s

1 kbps - 10^3 bits/s

1 gbps - 10^9 bits/s

#### **Explainig LAN, MAN & WAN**

LAN : small house/office (meaning it covers only small area not small no of computers
u can connect as many as computers but it should be in range. ) for eg:- ethernets, wifi.

MAN : across a city

WAN : across countries for eg:- optical fibre cables.

1. Sonet (synchronus optical networking)
2. Frame Relay - a way to connect your lan to the wider area i.e. internet.

Modem - used to convert digital signals into analog signals.

Routers - device that routes the data packet based on their ip adresses.


### **Topologies**

1. Bus Topology
2. Ring Topology
3. Star Topology
4. Tree Topology
5. Mesh Topology


### **OSI Model** *M.IMP*
stands for Open Systems Inteconnection Model.

So, There are 7 layers :

1. Application Layer - implemented in software. like sending message.
2. Presentation Layer - gets the data from application layer(chars, words etc.)(ASCII) and converts them into Machine Representable Binary Format(EBCDIC). so, it is only readable to the person whom the data is sent to.
3. Session Layer - helps in setting up and managing the connections and it enables sending and recieving of data followed by termination of connected session.
4. Transport Layer - data recieved from session layer is divided into small parts called segmentation. every segment will contain source and destination port number and a sequence number. & controls the amount of data being transported & works on error control like data, packet loss & adds a checksum in every data cell that way they can figure out recieved data is good or not. TCP - gives feedback & and provides 100% data, udp - no feedback faster than TCP & packet Loss can occur.
5. Network Layer - works for transmission of the received data segments from one computer to another computer that is located in a different network. This were the router lives. ip-addressing done in network layer is known as logical addressing. Network layer assigns the sender and receiver's ip address to every segment forms an ip-packet. & also it performs routing so moving 1 data packet from source to destination. Load balancing also happens here.
6. Data Link Layer - allows you to directly communicate with the computers. Physical addressing(like mac addresses) is done here. now, mac addresses of sender and receiver are assigned to data packets. **frame** is basically a data unit of the data link layer. mac address is a 12 digit alphanumeric number of the network interface of your computer. ur computer have multiple mac address (for eg bluetooth and wifi have different mac addresses)
7. Physical Layer - transports the binary data imported from upper layers into wires and local media i.e electricity signal, light signal or radiowave signal.

for eg: a message goes in this process(1->7) then reverse(7->1) occurs to retrieve the message in your's friend device.

### **Another Model - TCP/IP Model**
(TCP/IP Model & OSI Model) mostly similar but little bit difference in layers.

have 5 layers :

1. Application 
2. Transport
3. Network
4. Data Link
5. Physical