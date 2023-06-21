### File System

A file is a collection of correlated information which is recorded on secondary or non-volatile storage like magnetic disks, optical disks, and tapes. It is a method of data collection that is used as a medium for giving input and receiving output from that program.

In general, a file is a sequence of bits, bytes, or records whose meaning is defined by the file creator and user. Every File has a logical location where they are located for storage and retrieval.

### Objective of File System

Here are the main objectives of the file management system:

- It provides I/O support for a variety of storage device types.
- Minimizes the chances of lost or destroyed data
- Helps OS to standardized I/O interface routines for user processes.
- It provides I/O support for multiple users in a multiuser systems environment.


### Properties of a File System

- Files are stored on disk or other storage and do not disappear when a user logs off.
- Files have names and are associated with access permission that permits controlled sharing.
- Files could be arranged or more complex structures to reflect the relationship between them.

### File Structure
A File Structure needs to be predefined format in such a way that an operating system understands. It has an exclusively defined structure, which is based on its type.

Three types of files structure in OS:

- A text file: It is a series of characters that is organized in lines.
- An object file: It is a series of bytes that is organized into blocks.
- A source file: It is a series of functions and processes.


### File Attributes
A file has a name and data. Moreover, it also stores meta information like file creation date and time, current size, last modified date, etc. All this information is called the attributes of a file system.

Here, are some important File attributes used in OS:

- Name: It is the only information stored in a human-readable form.
- Identifier: Every file is identified by a unique tag number within a file system known as an identifier.
- Location: Points to file location on device.
- Type: This attribute is required for systems that support various types of files.
- Size. Attribute used to display the current file size.
- Protection. This attribute assigns and controls the access rights of reading, writing, and executing the file.
- Time, date and security: It is used for protection, security, and also used for monitoring


### File Type
It refers to the ability of the operating system to differentiate various types of files like text files, binary, and source files. However, Operating systems like MS_DOS and UNIX has the following type of files:


#### Character Special File
It is a hardware file that reads or writes data character by character, like mouse, printer, and more.

#### Ordinary Files
- These types of files stores user information.
- It may be text, executable programs, and databases.
- It allows the user to perform operations like add, delete, and modify.

#### Directory Files
- Directory contains files and other related information about those files. Its basically a folder to hold and organize multiple files.


#### Special Files
- These files are also called device files. It represents physical devices like printers, disks, networks, flash drive, etc.


#### Functions of File
- Create file, find space on disk, and make an entry in the directory.
- Write to file, requires positioning within the file
- Read from file involves positioning within the file
- Delete directory entry, regain disk space.
- Reposition: move read/write position


### Commonly used terms in File systems

#### Field:
This element stores a single value, which can be static or variable length.

#### DATABASE:
Collection of related data is called a database. Relationships among elements of data are explicit.

#### FILES:
Files is the collection of similar record which is treated as a single entity.

#### RECORD:
A Record type is a complex data type that allows the programmer to create a new data type with the desired column structure. Its groups one or more columns to form a new data type. These columns will have their own names and data type


### File Access Methods
File access is a process that determines the way that files are accessed and read into memory. Generally, a single access method is always supported by operating systems. Though there are some operating system which also supports multiple access methods.

#### Three file access methods are:
- Sequential access
- Direct random access
- Index sequential access

#### Sequential Access
In this type of file access method, records are accessed in a certain pre-defined sequence. In the sequential access method, information stored in the file is also processed one by one. Most compilers access files using this access method.

#### Random Access
The random access method is also called direct random access. This method allow accessing the record directly. Each record has its own address on which can be directly accessed for reading and writing.

#### Index-Sequential Access
This type of accessing method is based on simple sequential access. In this access method, an index is built for every file, with a direct pointer to different memory blocks. In this method, the Index is searched sequentially, and its pointer can access the file directly. Multiple levels of indexing can be used to offer greater efficiency in access. It also reduces the time needed to access a single record.



### Space Allocation

- Linked Allocation
- Indexed Allocation
- Contiguous Allocation
#### Contiguous Allocation
- Every file users a contiguous address space on memory.
- Here, the OS assigns disk address is in linear order.
- In the contiguous allocation method, external fragmentation is the biggest issue.
#### Linked Allocation

- Every file includes a list of links.
- The directory contains a link or pointer in the first block of a file.
- With this method, there is no external fragmentation
- This File allocation method is used for sequential access files.
- This method is not ideal for a direct access file.

#### Indexed Allocation

- Directory comprises the addresses of index blocks of the specific files.
- An index block is created, having all the pointers for specific files.
- All files should have individual index blocks to store the addresses for disk space.