#ifndef __queue_h__
#define __queue_h__

#include "node.h"

class Queue {
private:
    Node* _head;
    Node* _tail;
    int _size;

public:
    Queue();

    int is_empty();
    int size();

    void enqueue(void* content);
    void* dequeue();
    void* lookup();
};

#endif
