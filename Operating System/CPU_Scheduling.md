### What is CPU Scheduling?
- CPU Scheduling is a process of determining which process will own CPU for execution while another process is on hold. 
- It selects one of the processes in memory that are ready for execution.

### Types :

- **Non-Preemptive Scheduling** : The CPU has been allocated to a specific process. The process that keeps the CPU busy will release the CPU either by switching context or terminating. It is the only method that can be used for various hardware platforms.
 
- **Preemptive Scheduling** : The tasks are mostly assigned with their priorities.Sometimes it is important to run a task with a higher priority before another lower priority task, even if the lower priority task is still running. The lower priority task holds for some time and resumes when the higher priority task finishes its execution.

### When scheduling is Preemptive or Non-Preemptive?

1. A process switches from the running to the waiting state.
2. Process finished its execution and terminated.

1&2 -> Non-Preemptive

3. Specific process switches from the running state to the ready state.
4.   Specific process switches from the waiting state to the ready state.

3&4 -> Preemptive

### Important Terminologies

- **Burst Time** : The time required by a process for CPU execution.
- **Arrival Time** : The time at which a process arrives in the ready queue.
- **Finish Time**: when process complete and exit from a system
- **Multiprogramming**: A number of programs which can be present in memory at the same time.
- **Jobs**: It is a type of program without any kind of user interaction.
- **User**: It is a kind of program having user interaction.
- **Process**: It is the reference that is used for both job and user.
- **CPU/IO burst cycle**: Characterizes process execution, which alternates between CPU and I/O activity. CPU times are usually shorter than the time of I/O.

### CPU Scheduling Criteria

- #### Maximize:
   - CPU utilization: CPU utilization is the main task in which the operating system needs to make sure that CPU remains as busy as possible. It can range from 0 to 100 percent. However, for the RTOS, it can be range from 40 percent for low-level and 90 percent for the high-level system.
  - Throughput: The number of processes that finish their execution per unit time is known Throughput. So, when the CPU is busy executing the process, at that time, work is being done, and the work completed per unit time is called Throughput.

- #### Minimize:
    - Waiting time: Waiting time is an amount that specific process needs to wait in the ready queue.

    - Response time: It is an amount to time in which the request was submitted until the first response is produced.

    - Turnaround Time: Turnaround time is an amount of time to execute a specific process. It is the calculation of the total time spent waiting to get into the memory, waiting in the queue and, executing on the CPU. The period between the time of process submission to the completion time is the turnaround time.

### Interval Timer
Timer interruption is a method that is closely related to preemption. When a certain process gets the CPU allocation, a timer may be set to a specified interval. Both timer interruption and preemption force a process to return the CPU before its CPU burst is complete.

Most of the multi-programmed operating system uses some form of a timer to prevent a process from tying up the system forever.

### What is Dispatcher?
It is a module that provides control of the CPU to the process. The Dispatcher should be fast so that it can run on every context switch. Dispatch latency is the amount of time needed by the CPU scheduler to stop one process and start another.

#### **Functions**
- Switching context
- Switching to user mode
- Moving to the correct location in the newly loaded program.


### Types of CPU scheduling Algorithm

- First Come First Serve (FCFS)
- Shortest-Job-First (SJF) Scheduling
- Shortest Remaining Time
- Priority Scheduling
- Round Robin Scheduling
- Multilevel Queue Scheduling

### First Come First Serve
-  It is the easiest and most simple CPU scheduling algorithm. In this type of algorithm, the process which requests the CPU gets the CPU allocation first. This scheduling method can be managed with a FIFO queue.
-  As the process enters the ready queue, its PCB (Process Control Block) is linked with the tail of the queue. So, when CPU becomes free, it should be assigned to the process at the beginning of the queue.

#### Characteristics of FCFS Scheduling
- It offers non-preemptive and pre-emptive scheduling algorithm.
- Jobs are always executed on a first-come, first-serve basis
- It is easy to implement and use.
- However, this method is poor in performance, and the general wait time is quite high.

### Shortest Remaining Time
It is also known as SJF preemptive scheduling. In this method, the process will be allocated to the task, which is closest to its completion. This method prevents a newer ready state process from holding the completion of an older process.

#### Characteristics of SJF Scheduling
- This method is mostly applied in batch environments where short jobs are required to be given preference.
- This is not an ideal method to implement it in a shared system where the required CPU time is unknown.
- Associate with each process as the length of its next CPU burst. So that operating system uses these lengths, which helps to schedule the process with the shortest possible time.

### Priority Based Scheduling
- In this method, the scheduler selects the tasks to work as per the priority.
- The processes with higher priority should be carried out first, whereas jobs with equal priorities are carried out on a round-robin or FCFS basis.
-  Priority can be decided based on memory requirements, time requirements, etc.

### Round-Robin Scheduling
- Round robin is the oldest, simplest scheduling algorithm. 
- The name of this algorithm comes from the round-robin principle, where each person gets an equal share of something in turn. 
- It is mostly used for scheduling algorithms in multitasking. 
- This algorithm method helps for starvation free execution of processes.

#### Characteristics of Round Robin Scheduling

- Round robin is a hybrid model which is clock-driven
- Time slice should be minimum, which is assigned for a specific task to be processed. However, it may vary for different processes.
- It is a real time system which responds to the event within a specific time limit.


### Shortest Job First
SJF is a full form of (Shortest job first) is a scheduling algorithm in which the process with the shortest execution time should be selected for execution next. This scheduling method can be preemptive or non-preemptive. It significantly reduces the average waiting time for other processes awaiting execution.


#### Characteristics of SJF Scheduling
- It is associated with each job as a unit of time to complete.
- In this method, when the CPU is available, the next process or job with the shortest completion time will be executed first.
- It is Implemented with non-preemptive policy.
- This algorithm method is useful for batch-type processing, where waiting for jobs to complete is not critical.
- It improves job output by offering shorter jobs, which should be executed first, which mostly have a shorter turnaround time.

### Multiple-Level Queues Scheduling
This algorithm separates the ready queue into various separate queues. In this method, processes are assigned to a queue based on a specific property of the process, like the process priority, size of the memory, etc.

#### Characteristics of Multiple-Level Queues Scheduling

- Multiple queues should be maintained for processes with some characteristics.
- Every queue may have its separate scheduling algorithms.
- Priorities are given for each queue.


### The Purpose of a Scheduling algorithm

- The CPU uses scheduling to improve its efficiency.
- It helps you to allocate resources among competing processes.
- The maximum utilization of CPU can be obtained with multi-programming.
- The processes which are to be executed are in ready queue.