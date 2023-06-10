# Computer Networking
<br>

### **How does the Internet work?**
<br>

#### **Internet Addresses** :

Because the Internet is a global network of computers each computer connected to the Internet must have a unique address. Internet addresses are in the form **nnn.nnn.nnn.nnn** where nnn must be a number from 0 - 255. This address is known as an IP address. (IP stands for Internet Protocol)

#### **Packets**
When data gets sent over the Internet, it is first broken up into smaller packets, which are then translated into bits. The packets get routed to their destination by various networking devices such as routers and switches. When the packets arrive at their destination, the receiving device reassembles the packets in order and can then use or display the data.

#### **Protocols** : 

There are protocols for sending packets between devices on the same network (Ethernet), for sending packets from network to network (IP), for ensuring those packets successfully arrive in order (TCP), and for formatting data for websites and applications (HTTP). In addition to these foundational protocols, there are also protocols for routing, testing, and encryption. And there are alternatives to the protocols listed above for different types of content — for instance, streaming video often uses UDP instead of TCP.

#### **Port Numbers** :
16 bit numbers, so no of combinations - 2^16
1-1023 - reserved like 80 for http
1024 - 49152 - reserved for applications like mongodb - 27017 , sql - 1433
remaining - yours 

1 mbps - 10^6 bits/s
1 kbps - 10^3 bits/s
1 gbps - 10^9 bits/s