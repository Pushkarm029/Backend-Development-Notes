### Kernel
A kernel is an important part of an OS that manages system resources. It also acts as a bridge between the software and hardware of the computer. It is one of the first program which is loaded on start-up after the bootloader. The Kernel is also responsible for offering secure access to the machine’s hardware for various programs. It also decides when and how long a certain application uses specific hardware.

### MicroKernel
Microkernel is a software or code which contains the required minimum amount of functions, data, and features to implement an operating system. It provides a minimal number of mechanisms, which is good enough to run the most basic functions of an operating system. It allows other parts of the operating system to be implemented as it does not impose a lot of policies.

Microkernels and their user environments are usually implemented in the C++ or C programming languages with a little bit of assembly. However, other implementation languages are possible with some high-level coding.

### Monolithic Kernel
Monolithic Kernel runs all the basic system services like process management, Memory management, I/O communication, and interrupt handling, file system, etc in kernel space.

In this type of Kernel approach, the entire operating system runs as a single program in kernel mode. The operating system is written as a collection of procedures that are linked together into a large executable binary program.

### Microkernel Architecture
Microkernel is the only software executing at the privileged level. The other important functionalities of the OS are removed from the kernel-mode and run in the user mode. These functionalities may be device drivers, application, file servers, interprocess communication, etc.

![kernelArchitecture](https://www.guru99.com/images/1/121119_0439_Microkernel1.png)

### Components of Microkernel
A microkernel comprises only the core functionalities of the system. A component is included in the Microkernel only if putting it outside would interrupt the functionality of the system. All other non-essential components should be put in the user mode.

The minimum functionalities required in the Microkernel are:

- Memory management mechanisms like address spaces should be included in the Microkernel.
- It also contains memory protection features.
- Processor scheduling mechanisms should contain process and thread schedulers.
- Inter-process communication manages the servers that run their own address spaces.


![Alt text](images/image.png)

### Advantages of Microkernel

- Microkernel architecture is small and isolated therefore it can function better.
- Microkernels are secure because only those components are included that disrupt the functionality of the system otherwise.
- The expansion of the system is more accessible, so it can be added to the system application without disturbing the Kernel.
- Microkernels are modular, and the different modules can be replaced, reloaded, modified without even touching the Kernel.
- Fewer system crashes when compared with monolithic systems.
- Microkernel interface helps you to enforce a more modular system structure.
- Without recompiling, add new features
- Server malfunction is also isolated as any other user program’s malfunction.
- Microkernel system is flexible, so different strategies and APIs, implemented by different servers, which can coexist in the system.
- Increased security and stability will result in a decreased amount of code which runs on kernel mode


### Disadvantage of Microkernel

- Providing services in a microkernel system are expensive compared to the normal monolithic system.
- Context switch or a function call needed when the drivers are implemented as procedures or processes, respectively.
- The performance of a microkernel system can be indifferent and may lead to some problems.