# **Components Of Operating Systems**

> Although Mac, Unix, Linux, Windows, and other OS do not have the same structure, most of the operating systems share similar OS system components like File, Process, Memory, I/O device management.

![ComponentsOfOS](https://www.guru99.com/images/1/121119_0437_Componentso1.png)

### File Management
A file is a set of related information which is should define by its creator. It commonly represents programs, both source and object forms, and data. Data files can be numeric, alphabetic, or alphanumeric.

#### Functions of File Management :
- File and directory creation and deletion.
- For manipulating files and directories.
- Mapping files onto secondary storage.
- Backup files on stable storage media.

### Process Management
- Every software application program has one or more processes associated with them when they are running.
- All these processes should be managed by process management, which keeps processes for running efficiently.
- It also uses memory allocated to them and shutting them down when needed.
- The execution of a process must be sequential so, at least one instruction should be executed on behalf of the process.

#### Functions of Process Management
- Process creation and deletion.
- Suspension and resumption.
- Synchronization process
- Communication process

### I/O Device Management
Operating system hides the variations of specific hardware devices from the user.

#### Functions of I/O Management
- It offers buffer caching system
- It provides general device driver code
- It provides drivers for particular hardware devices.
- I/O helps you to knows the individualities of a specific device.

### Network Management 
- It includes performance management, fault analysis, provisioning of networks, and maintaining the quality of service.
- A distributed system is a collection of computers/processors that never share their own memory or a clock. 
- In this type of system, all the processors have their local Memory, and the processors communicate with each other using different communication lines, like fiber optics or telephone lines.
- The computers in the network are connected through a communication network, which can be configured in a number of different ways. 
- With the help of network management, the network can be fully or partially connected, which helps users to design routing and connection strategies that overcome connection and security issues.


#### Functions of Network Management:
- Distributed systems help you to various computing resources in size and function. They may involve microprocessors, minicomputers, and many general-purpose computer systems.
- A distributed system also offers the user access to the various resources the network shares.
- It helps to access shared resources that help computation to speed-up or offers data availability and reliability.


### Main Memory Management
- Main Memory is a large array of storage or bytes, which has an address.
- The memory management process is conducted by using a sequence of reads or writes of specific memory addresses.
- In order to execute a program , it should be mapped to absolute addresses and loaded inside the Memory. 
- The selection of a memory management method depends on several factors.
- However, it is mainly based on the hardware design of the system.
- Each algorithm requires corresponding hardware support. 
- Main Memory offers fast storage that can be accessed directly by the CPU. 
- It is costly and hence has a lower storage capacity.
- However, for a program to be executed, it must be in the main Memory.

#### Functions of Memory Management :
- It helps you to keep track of primary memory.
- Determine what part of it are in use by whom, what part is not in use.
- In a multiprogramming system, the OS takes a decision about which process will get Memory and how much.
- Allocates the memory when a process requests
- It also de-allocates the Memory when a process no longer requires or has been terminated.


### Secondary-Storage Management
- The most important task of a computer system is to execute programs. These programs, along with the data, helps you to access, which is in the main memory during execution.
- This Memory of the computer is very small to store all data and programs permanently. The computer system offers secondary storage to back up the main Memory. 
- Today modern computers use hard drives/SSD as the primary storage of both programs and data. However, the secondary storage management also works with storage devices, like a USB flash drive, and CD/DVD drives.
- Programs like assemblers, compilers, stored on the disk until it is loaded into memory, and then use the disk as a source and destination for processing.

#### Functions of Secondary-Storage Management :

- Storage Allocation
- Free Space Management
- Disk Scheduling


### Security Management
- The various processes in an operating system need to be secured from each other’s activities. 
- For that purpose, various mechanisms can be used to ensure that those processes which want to operate files, memory CPU, and other hardware resources should have proper authorization from the operating system.

- For example, Memory addressing hardware helps you to confirm that a process can be executed within its own address space. The time ensures that no process has control of the CPU without renouncing it.

- Lastly, no process is allowed to do its own I/O, to protect, which helps you to keep the integrity of the various peripheral devices.


### Other IMP Activities: 
- The user’s program can’t execute I/O operations directly. The operating system should provide some medium to perform this.
- OS checks the capability of the program to read, write, create, and delete files.
- OS facilitates an exchange of information between processes executing on the same or different systems.
- OS components help you to makes sure that you get the correct computing by detecting errors in the CPU and memory hardware.



