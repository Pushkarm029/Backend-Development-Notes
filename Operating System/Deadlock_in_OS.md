### What is Deadlock?
- A deadlock is a situation where a set of processes are blocked because each process is holding a resource and waiting for another resource acquired by some other process.
- It is a common problem in multi-processing where several processes share a specific type of mutually exclusive resource known as a soft lock or software.

### Example of Deadlock
- A real-world example would be traffic, which is going only in one direction.
- Here, a bridge is considered a resource.
- So, when Deadlock happens, it can be easily resolved if one car backs up (Preempt resources and rollback).
- Several cars may have to be backed up if a deadlock situation occurs.
So starvation is possible.

### What is Circular wait?
One process is waiting for the resource, which is held by the second process, which is also waiting for the resource held by the third process etc. This will continue until the last process is waiting for a resource held by the first process. This creates a circular chain.

For example, Process A is allocated Resource B as it is requesting Resource A. In the same way, Process B is allocated Resource A, and it is requesting Resource B. This creates a circular wait loop.


### Deadlock Detection in OS
A deadlock occurrence can be detected by the resource scheduler. A resource scheduler helps OS to keep track of all the resources which are allocated to different processes.

### Deadlock Prevention in OS
The system checks every transaction before it is executed to make sure it doesn’t lead the deadlock situations. Such that even a small change to occur dead that an operation which can lead to Deadlock in the future it also never allowed process to execute.

It is a set of methods for ensuring that at least one of the conditions cannot hold.


#### No Preemptive action :
A resource can be released only voluntarily by the process holding it after that process has finished its task

#### Mutual Exclusion :
- It includes a priority inheritance mechanism to avoid extended priority inversion problems. It allows current higher priority tasks to be kept in the blocked state for the shortest time possible.

- Resources shared such as read-only files never lead to deadlocks, but resources, like printers and tape drives, needs exclusive access by a single process.

#### Hold and Wait :
In this condition, processes must be stopped from holding single or multiple resources while simultaneously waiting for one or more others.

#### Circular Wait :
It imposes a total ordering of all resource types. Circular wait also requires that every process request resources in increasing order of enumeration.


### Deadlock Avoidance Algorithms
The deadlock-avoidance algorithm helps you to dynamically assess the resource-allocation state so that there can never be a circular-wait situation.

#### A Single instance of a resource type
- Use a resource-allocation graph
- Cycles are necessary which are sufficient for Deadlock

#### Multiple instances of a resource type
- Use the banker’s algorithm
- Cycles are necessary but never sufficient for Deadlock.

<br>

![diff](images/starvationvsdead.png)

<br>

### Advantages of Deadlock

- This situation works well for processes which perform a single burst of activity
- No preemption needed for Deadlock.
- Convenient method when applied to resources whose state can be saved and restored easily
- Feasible to enforce via compile-time checks
- Needs no run-time computation since the problem is solved in system design

### Disadvantages of Deadlock

- Delays process initiation
- Processes must know future resource need
- Pre-empts more often than necessary
- Dis-allows incremental resource requests
- Inherent preemption losses.