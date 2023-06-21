## What is a Real-Time Operating System (RTOS)?

- It is an operating system intended to serve real time application that process data as it comes in, mostly without buffer delay.
- In a RTOS, Processing time requirement are calculated in tenths of seconds increments of time. 
- It is time-bound system that can be defined as fixed time constraints. 
- In this type of system, processing must be done inside the specified constraints. Otherwise, the system will fail.

### Why use an RTOS?

- It offers priority-based scheduling, which allows you to separate analytical processing from non-critical processing.
- The Real time OS provides API functions that allow cleaner and smaller application code.
- Abstracting timing dependencies and the task-based design results in fewer interdependencies between modules.
- RTOS offers modular task-based development, which allows modular task-based testing.
- The task-based API encourages modular development as a task, will typically have a clearly defined role. It allows designers/teams to work independently on their parts of the project.
- An RTOS is event-driven with no time wastage on processing time for the event which is not occur.

### Components of RTOS

![ALT](https://www.guru99.com/images/1/121119_0515_Realtimeope1.png)

- **The Scheduler**: This component of RTOS tells that in which order, the tasks can be executed which is generally based on the priority.

- **Symmetric Multiprocessing (SMP)**: It is a number of multiple different tasks that can be handled by the RTOS so that parallel processing can be done.

- **Function Library**: It is an important element of RTOS that acts as an interface that helps you to connect kernel and application code. This application allows you to send the requests to the Kernel using a function library so that the application can give the desired results.

- **Memory Management**: this element is needed in the system to allocate memory to every program, which is the most important element of the RTOS.

- **Fast dispatch latency**: It is an interval between the termination of the task that can be identified by the OS and the actual time taken by the thread, which is in the ready queue, that has started processing.

- **User-defined data objects and classes**: RTOS system makes use of programming languages like C or C++, which should be organized according to their operation.

### Types of RTOS

- Hard Real Time : 
  In Hard RTOS, the deadline is handled very strictly which means that given task must start executing on specified scheduled time, and must be completed within the assigned time duration. Example: Medical critical care system, Aircraft systems, etc.

- Firm Real Time :
  These type of RTOS also need to follow the deadlines. However, missing a deadline may not have big impact but could cause undesired affects, like a huge reduction in quality of a product. Example: Various types of Multimedia applications.

- Soft Real Time :
  Soft Real time RTOS, accepts some delays by the Operating system. In this type of RTOS, there is a deadline assigned for a specific job, but a delay for a small amount of time is acceptable. So, deadlines are handled softly by this type of RTOS. Example: Online Transaction system and Livestock price quotation System.


### Terms used in RTOS
- Task – A set of related tasks that are jointly able to provide some system functionality.
- Job – A job is a small piece of work that can be assigned to a processor, and that may or may not require resources.
- Release time of a job – It’s a time of a job at which job becomes ready for execution.
- Execution time of a job: It is time taken by job to finish its execution.
- Deadline of a job: It’s time by which a job should finish its execution.
- Processors: They are also known as active resources. They are important for the execution of a job.
- Maximum It is the allowable response time of a job is called its relative deadline.
- Response time of a job: It is a length of time from the release time of a job when the instant finishes.
- Absolute deadline: This is the relative deadline, which also includes its release time.


### Features of RTOS
- Occupy very less memory
- Consume fewer resources
- Response times are highly predictable.
- Unpredictable environment
- The Kernel saves the state of the interrupted task ad then determines which task it should run next.
- The Kernel restores the state of the task and passes control of the CPU for that task.

### Factors for selecting an RTOS
- **Performance**: Performance is the most important factor required to be considered while selecting for a RTOS.
- **Middleware**: if there is no middleware support in Real time operating system, then the issue of time-taken integration of processes occurs.
- **Error-free**: RTOS systems are error-free. Therefore, there is no chance of getting an error while performing the task.
- **Embedded system usage**: Programs of RTOS are of small size. So we widely use RTOS for embedded systems.
- **Maximum Consumption**: we can achieve maximum Consumption with the help of RTOS.
- **Task shifting:** Shifting time of the tasks is very less.
- **Unique features**: A good RTS should be capable, and it has some extra features like how it operates to execute a command, efficient protection of the memory of the system, etc.
- **24/7 performance**: RTOS is ideal for those applications which require to run 24/7

<br>


![Alt text](images/diffbwrtosandgpos.png)

### Applications of Real Time Operating System
Real-time systems are used in:

- Airlines reservation system.
- Air traffic control system.
- Systems that provide immediate updating.
- Used in any system that provides up to date and minute information on stock prices.
- Defense application systems like RADAR.
- Networked Multimedia Systems
- Command Control Systems
- Internet Telephony
- Anti-lock Brake Systems
- Heart Pacemaker
### Disadvantages of RTOS
Here, are drawbacks/cons of using RTOS system:

- RTOS system can run minimal tasks together, and it concentrates only on those applications which contain an error so that it can avoid them.
- RTOS is the system that concentrates on a few tasks. Therefore, it is really hard for these systems to do multi-tasking.
- Specific drivers are required for the RTOS so that it can offer fast response time to interrupt signals, which helps to maintain its speed.
- Plenty of resources are used by RTOS, which makes this system expensive.
- The tasks which have a low priority need to wait for a long time as the RTOS maintains the accuracy of the program, which are under execution.
- Minimum switching of tasks is done in Real time operating systems.
- It uses complex algorithms which is difficult to understand.
- RTOS uses lot of resources, which sometimes not suitable for the system