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

#### **Explaining LAN, MAN & WAN**

LAN : small house/office for eg:- ethernets, wifi.

>meaning it covers only small area not small no of computers,
you can connect as many as computers but it should be in range.

MAN : across a city.

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


### **OSI Model** *Concept-Based*
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

### **Another Model - TCP/IP Model** ***Practically-used***
(TCP/IP Model & OSI Model) mostly similar but little bit difference in layers.

have 5 layers :

1. Application Layer
2. Transport Layer
3. Network Layer
4. Data Link Layer
5. Physical Layer



#### **Application Layer**
Layer in which user interacts with it. consists of various applictions like web browsers, whatsapp etc. where -> in your devices

Application have two parts
- client part
- server part

- Protocols - basically rules & regulations.
- Client - server architecture
  client sends a request to server. server sends a response back to client.

what is a server?
server is basically a system that controls the website you are hosting.

the collection of servers in a big company is known as data centers. its a collection of huge number of computers. it may have static ip addresses.

ping - it measures the round trip time for messages sent rom origin to destination then come back.

you can't reduce ping time because already data is travelling at speed of light in optical fibre cable.


Peer to Peer(P2P) Architecture :

various computers get connected to each other. so there is no server or large data center. advantage - you can scale up rapidly. its little bit like of decentralised. in P2P , every computer can be called as a server or client. ex- Bittorrent. 


### **Networking Devices**

1. Repeater - A repeater operates at the physical layer. Its job is to regenerate the signal over the same network before the signal becomes too weak or corrupted so as to extend the length to
which the signal can be transmitted over the same network. An important point to be noted about
repeaters is that they do not amplify the signal. When the signal becomes weak, they copy the
signal bit by bit and regenerate it at the original strength. It is a 2 port device.

2. Hub - A hub is basically a multiport repeater. A hub connects multiple wires coming from
different branches, for example, the connector in star topology which connects different stations.
Hubs cannot filter data, so data packets are sent to all connected devices. In other
words, collision domain of all hosts connected through Hub remains one. Also, they do not have
intelligence to find out best path for data packets which leads to inefficiencies and wastage.

Types of Hub
Active Hub :- These are the hubs which have their own power supply and can clean, boost
●
and relay the signal along the network. It serves both as a repeater as well as wiring center.
These are used to extend maximum distance between nodes.
Passive Hub :- These are the hubs which collect wiring from nodes and power supply from
active hub. These hubs relay signals onto the network without cleaning and boosting them
and can't be used to extend distance between nodes.



3. Bridge - A bridge operates at data link layer. A bridge is a repeater, with add on functionality of
filtering content by reading the MAC addresses of source and destination. It is also used for
interconnecting two LANs working on the same protocol. It has a single input and single output
port, thus making it a 2 port device.
Types of Bridges
Transparent Bridges :- These are the bridge in which the stations are completely unaware
of the
bridge's existence i.e. whether or not a bridge is added or deleted from the network,
reconfiguration of
the stations is unnecessary. These bridges makes use of two processes i.e. bridge
forwarding and bridge learning.
Source Routing Bridges :- In these bridges, routing operation is performed by source
●
station and the frame specifies which route to follow. The hot can discover frame by sending
a specical frame called discovery frame, which spreads through the entire network using all
possible paths to destination.


4. Switch - A switch is a multi port bridge with a buffer and a design that can boost its
efficiency (large number of ports imply less traffic) and performance. Switch is data link layer
device. Switch can perform error checking before forwarding data, that makes it very efficient as it
does not forward packets that have errors and forward good packets selectively to correct port
only. In other words, switch divides collision domain of hosts, but broadcast domain remains
same.

5. Routers - A router is a device like a switch that routes data packets based on their IP
addresses. Router is mainly a Network Layer device. Routers normally connect LANS and WANS
together and have a dynamically updating routing table based on which they make decisions on
routing the data packets. Router divide broadcast domains of hosts connected through it.

6. Gateway - A gateway, as the name suggests, is a passage to connect two networks together
that may work upon different networking models. They basically works as the messenger agents
that take data from one system, interpret it, and transfer it to another system. Gateways are also
called protocol converters and can operate at any network layer. Gateways are generally more
complex than switch or router.
7. Brouter - It is also known as bridging router is a device which combines features of both bridge
and router. It can work either at data link layer or at network layer. Working as router, it is capable
of routing packets across networks and working as bridge, it is capable of filtering local area
network traffic.


### **Protocols**

- Web Protocols : 
    - TCP/IP :
      - HTTP -> HyperText Transfer Protocol
      - DHCP -> Dynamic Host Control Protocol, It Basically allocates the ip-adresses to the devices that are connected to your computer.
      - FTP -> File Transfer Protocol
      - SMTP -> Simple Mail Transfer Protocol (To send the emails)
      - POP3/IMAP -> (To receive emails)
      - SSH -> Secure Shell , if you want to login in terminal of another computer.
      - VNC -> Virtual Network Computing, its for graphic control.
    - Telnet -> Terminal emulation that enables the user to connect to a remote host or device. usually its over port 23.
    - UDP -> stateless connection, data may be lost in this during the lifetime of the connection.
  

> Thread is a lighter version of process. Thread only do one single job at a time.


### **Sockets**
when you need to send messages from one system to another system, its a kind of software process. interface b/w internet and process.

### **Ports**
IP-addresses tell which devices we are working with. Ports tell which application we are working with.

- Ephemeral Ports -> internally, it will assign itself random port numbers, if the multiple instances(like multiple windows and tabs) are running. once the process is done , it will be freed. they can exist on client side but you have to know the number on server side.


### **HTTP**
it is a client server protocol it tells us how you request data from server and how the server will send back data to the client.so this is a application layer protocol. so every application layer protocol requires some transport layer protocol. it uses TCP in transport layer. HTTP is stateless


### **Methods**:
You are telling server what to do.
1. GET