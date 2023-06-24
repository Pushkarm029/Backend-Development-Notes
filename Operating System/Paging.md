### What is Paging in OS?
- Paging is a memory management scheme that eliminates the need for contiguous allocation of physical memory. 
- The process of retrieving processes in the form of pages from the secondary storage into the main memory is known as paging. 
- The basic purpose of paging is to separate each procedure into pages.
- In the Paging method, the main memory is divided into small fixed-size blocks of physical memory, which is called frames. 
- The size of a frame should be kept the same as that of a page to have maximum utilization of the main memory and to avoid external fragmentation. 

### Example of Paging in OS
For example, if the main memory size is 16 KB and Frame size is 1 KB. Here, the main memory will be divided into the collection of 16 frames of 1 KB each.

There are 4 separate processes in the system that is A1, A2, A3, and A4 of 4 KB each. Here, all the processes are divided into pages of 1 KB each so that operating system can store one page in one frame.

At the beginning of the process, all the frames remain empty so that all the pages of the processes will get stored in a contiguous way.

![hhhh](https://www.guru99.com/images/1/122319_0804_PaginginOpe1.png)

In this example you can see that A2 and A4 are moved to the waiting state after some time. Therefore, eight frames become empty, and so other pages can be loaded in that empty blocks. The process A5 of size 8 pages (8 KB) are waiting in the ready queue.

![hhhh](https://www.guru99.com/images/1/122319_0804_PaginginOpe2.png)

### What is Paging Protection?
The paging process should be protected by using the concept of insertion of an additional bit called Valid/Invalid bit. Paging Memory protection in paging is achieved by associating protection bits with each page. These bits are associated with each page table entry and specify protection on the corresponding page.

### Advantages of Paging in OS
- Easy to use memory management algorithm
- No need for external Fragmentation
- Swapping is easy between equal-sized pages and page frames.

### Disadvantages of Paging in OS
- May cause Internal fragmentation
- Page tables consume additonal memory.
- Multi-level paging may lead to memory reference overhead.