# Queue-Sample
a sample implementation of the data struct queue in c++

There are five sources:

  - node.h
  - node.cpp
  - queue.h
  - queue.cpp
  - main.cpp

In the Makefile, just use the command 'make run' make sure of compiling all and run the main example

In node.h/node.cpp there are all definitions/implementations of class Node used at the base of the Queue.
Cause the usage of this Node are not defined, the field 'data' (called 'content') of Node is leaved as a void pointer. For specific usage, it's better to modify it.

In queue.h/queue.cpp there are all definitions/implementations of class Queue

The main.cpp source is the code for a sample example to show the usage of Queue Class
