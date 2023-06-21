# **Operating System**
### **Types :**
- Batch Operating System
- MultiTasking/Time Sharing OS
- Multiprocessing OS
- Real Time OS
- Distributed OS
- Network OS
- Mobile OS

#### **Batch Operating System**
- Some computer processes are very lengthy and time-consuming. 
- To speed the same process, a job with a similar type of needs are batched together and run as a group.
- In this type of OS, every user prepares his or her job on an offline device like a punch card and submit it to the computer operator.


#### **Multi-Tasking/Time-Sharing OS**
- Time-sharing operating system enables people located at a different terminal(shell) to use a single computer system at the same time. 
- The processor time (CPU) which is shared among multiple users is termed as time sharing.

#### **RealTime OS**
- A real time operating system time interval to process and respond to inputs is very small. Examples: Military Software Systems, Space Software Systems.

#### **Distributed Operating System**
- Distributed systems use many processors located in different machines to provide very fast computation to its users.

#### **Network Operating System**
- Network Operating System runs on a server. 
- It provides the capability to serve to manage data, user, groups, security, application, and other networking functions.

#### **Mobile OS**
- Mobile operating systems are those OS which is especially that are designed to power smartphones, tablets, and wearables devices.


### **Functions**

![functionsofOS](https://www.guru99.com/images/1/011819_0753_OperatingSy5.png)

1. ***Process management***: Process management helps OS to create and delete processes. It also provides mechanisms for synchronization and communication among processes.
2. ***Memory management***: Memory management module performs the task of allocation and de-allocation of memory space to programs in need of this resources.
3. ***File management***: It manages all the file-related activities such as organization storage, retrieval, naming, sharing, and protection of files.
4. ***Device Management***: Device management keeps tracks of all devices. This module also responsible for this task is known as the I/O controller. It also performs the task of allocation and de-allocation of the devices.
5. ***I/O System Management***: One of the main objects of any OS is to hide the peculiarities of that hardware devices from the user.
6. ***Secondary-Storage Management***: Systems have several levels of storage which includes primary storage, secondary storage, and cache storage. Instructions and data must be stored in primary storage or cache so that a running program can reference it.
7. ***Security***: Security module protects the data and information of a computer system against malware threat and authorized access.
8. ***Command interpretation***: This module is interpreting commands given by the and acting system resources to process that commands.
9. ***Networking***: A distributed system is a group of processors which do not share memory, hardware devices, or a clock. The processors communicate with one another through the network.
10. ***Job accounting***: Keeping track of time & resource used by various job and users.
11. ***Communication management***: Coordination and assignment of compilers, interpreters, and another software resource of the various users of the computer systems.

### **Features Of OS**

- Protected and supervisor mode
- Allows disk access and file systems Device drivers Networking Security
- Program Execution
- Memory management Virtual Memory
- Multitasking
- Handling I/O operations
- Manipulation of the file system
- Error Detection and handling
- Resource allocation
- Information and Resource Protection


### **Kernel in Operating Systems**
- The kernel is the central component of a computer operating systems. 
- The only job performed by the kernel is to the manage the communication between the software and the hardware. 
- A Kernel is at the nucleus of a computer.
- While the Kernel is the innermost part of an operating system, a shell is the outermost one.

![Intro2Kernel](https://www.guru99.com/images/1/011819_0753_OperatingSy4.png)

#### **Features of Kernel**
- Low-level scheduling of processes
- Inter-process communication
- Process synchronization
- Context switching


#### **Types of Kernel**
There are many, but we only study two most popular :

1. Monolithic 
   - A monolithic kernel is a single code or block of the program. It provides all the required services offered by the operating system. It is a simplistic design which creates a distinct communication layer between the hardware and software.
2. MicroKernels
   - Microkernel manages all system resources. In this type of kernel, services are implemented in different address space. The user services are stored in user address space, and kernel services are stored under kernel address space. So, it helps to reduce the size of both the kernel and operating system.



### **Difference between Firmware & OS**
#### ***Firmware***
-  Firmware is one kind of programming that is embedded on a chip in the device which controls that specific device.
-  Firmware is programs that been encoded by the manufacture of the IC or something and cannot be changed.
-  It is stored on non-volatile memory.

#### ***OS***
- OS provides functionality over and above that which is provided by the firmware.
- OS is a program that can be installed by the user and can be changed.
- OS is stored on the hard drive.

![OS](Images/Screenshot%20(15).png)