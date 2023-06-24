
### What is First Come First Serve Method?
- First Come First Serve (FCFS) is an operating system scheduling algorithm that automatically executes queued requests and processes in order of their arrival.
- As the process enters the ready queue, its PCB (Process Control Block) is linked with the tail of the queue and, when the CPU becomes free, it should be assigned to the process at the beginning of the queue.

### Characteristics of FCFS method
- This method is poor in performance, and the general wait time is quite high.
- It supports non-preemptive and pre-emptive scheduling algorithm.

### Examples of FCFS method
- A real-life example of the FCFS method is buying a movie ticket on the ticket counter.

### How FCFS Works? Calculating Average Waiting Time
- Works as it is as queue data structure.


### Advantages of FCFS method

- The simplest form of a CPU scheduling algorithm
- Easy to program
- First come first served

### Disadvantages of FCFS method

- It is a Non-Preemptive CPU scheduling algorithm, so after the process has been allocated to the CPU, it will never release the CPU until it finishes executing.
- The Average Waiting Time is high.
- Short processes that are at the back of the queue have to wait for the long process at the front to finish.
- Not an ideal technique for time-sharing systems.
- Because of its simplicity, FCFS is not very efficient.