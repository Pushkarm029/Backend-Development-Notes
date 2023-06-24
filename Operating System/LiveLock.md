### What is Livelock?
Livelock occurs when two or more processes continually repeat the same interaction in response to changes in the other processes without doing any useful work. These processes are not in the waiting state, and they are running concurrently. This is different from a deadlock because in a deadlock all processes are in the waiting state. 

### Examples of Livelock

Example 1:

- An easiest example of Livelock would be two people who meet face-to-face in a corridor, and both of them move aside to let the other pass. They end up moving from side to side without making any progress as they move the same way at the time. Here, they never cross each other.

### What Leads to Livelock?
Livelock occurs when the total number of allowed processes in a specific system should be defined by the total number of entries in the process table. Therefore, process table slots should be referred to as Finite Resources.


### What is Starvation?
- Starvation is a situation where all the low priority processes got blocked, and the high priority processes proceed. In any system, requests for high/low priority resources keep on happening dynamically. Thereby, some policy is require to decide who gets support when.

- Using some algorithms, some processes may not get the desired serviced even though they are not deadlocked. Starvation occurs when some threads make shared resources unavailable for a long period of time.

### Difference Between Deadlock, Starvation, and Livelock:

- A deadlock is a situation that occurs in OS when any process enters in a waiting state because the demanded resource is being held by another waiting process.
- A livelock, on the other hand, is almost similar to a deadlock, except that the states of the processes which are involved in a livelock always keep on changing to one another, none progressing.
- So, Livelock is a unique case of resource starvation.