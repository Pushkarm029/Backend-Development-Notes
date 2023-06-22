### What is RPC?
- It is an interprocess communication technique.
- It is used for client-server applications. 
- RPC mechanisms are used when a computer program causes a procedure or subroutine to execute in a different address space, which is coded as a normal procedure call without the programmer specifically coding the details for the remote interaction.
- This procedure call also manages low-level transport protocol, such as User Datagram Protocol, Transmission Control Protocol/Internet Protocol etc. 
- It is used for carrying the message data between programs.

### Types of RPC
- Callback RPC
- Broadcast RPC
- Batch Mode RPC

### Callback RPC
This type of RPC enables a P2P paradigm between participating processes. It helps a process to be both client and server services.

#### **Functions**
- Remotely processed interactive application problems
- Offers server with clients handle
- Callback makes the client process wait
- Manage callback deadlocks
- It facilitates a peer-to-Peer paradigm among participating processes.

### Broadcast RPC
Broadcast RPC is a client’s request, that is broadcast on the network, processed by all servers which have the method for processing that request.

#### **Functions**
- Allows you to specify that the client’s request message has to be broadcasted.
- You can declare broadcast ports.
- It helps to reduce the load on the physical network.

### Batch Mode RPC
Batch-mode RPC helps to queue, separate RPC requests, in a transmission buffer, on the client-side, and then send them on a network in one batch to the server.

#### **Functions**
- It minimizes overhead involved in sending a request as it sends them over the network in one batch to the server.
- This type of RPC protocol is only efficient for the application that needs lower call rates.
- It needs a reliable transmission protocol.


### RPC Architecture
1. Client
2. Client Stub
3. RPC Runtime
4. Server Stub
5. Server


![Architecture](https://www.guru99.com/images/1/121119_0526_RemoteProce1.png)

### How RPC works?
Step 1: The client, the client stub, and one instance of RPC run time execute on the client machine.
Step 2: A client starts a client stub process by passing parameters in the usual way. The client stub stores within the client’s own address space. It also asks the local RPC Runtime to send back to the server stub.
Step 3: In this stage, RPC accessed by the user by making regular Local Procedural Cal. RPC Runtime manages the transmission of messages between the network across client and server. It also performs the job of retransmission, acknowledgment, routing, and encryption.
Step 4: In this stage, RPC accessed by the user by making regular Local Procedural Cal. RPC Runtime manages the transmission of messages between the network across client and server. It also performs the job of retransmission, acknowledgment, routing, and encryption.
Step 5: In this step, the transport layer sends back the result message to the client transport layer, which returns back a message to the client stub.
Step 6:  In this stage, the client stub demarshalls (unpack) the return parameters, in the resulting packet, and the execution process returns to the caller.

### Characteristics of RPC
Here are the essential characteristics of RPC:

- The called procedure is in another process, which is likely to reside in another machine.
- The processes do not share address space.
- Parameters are passed only by values.
- RPC executes within the environment of the server process.
- It doesn’t offer access to the calling procedure’s environment.

### Features of RPC
- Simple call syntax
- Offers known semantics
- Provide a well-defined interface
- It can communicate between processes on the same or different machines

### Advantages of RPC

- RPC method helps clients to communicate with servers by the conventional use of procedure calls in high-level languages.
- RPC method is modeled on the local procedure call, but the called procedure is most likely to be executed in a different process and usually a different computer.
- RPC supports process and thread-oriented models.
- RPC makes the internal message passing mechanism hidden from the user.
- The effort needs to re-write and re-develop the code is minimum.
- Remote procedure calls can be used for the purpose of distributed and the local environment.
- It commits many of the protocol layers to improve performance.
- RPC provides abstraction. For example, the message-passing nature of network communication remains hidden from the user.
- RPC allows the usage of the applications in a distributed environment that is not only in the local environment.
- With RPC code, re-writing and re-developing effort is minimized.
- Process-oriented and thread-oriented models support by RPC.


### Disadvantages of RPC

- Remote Procedure Call Passes Parameters by values only and pointer values, which is not allowed.
- Remote procedure calling (and return) time (i.e., overheads) can be significantly lower than that for a local procedure.
- This mechanism is highly vulnerable to failure as it involves a communication system, another machine, and another process.
- RPC concept can be implemented in different ways, which is can’t standard.
- Not offers any flexibility in RPC for hardware architecture as It is mostly interaction-based.
- The cost of the process is increased because of a remote procedure call.