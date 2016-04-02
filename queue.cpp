#ifndef __queue_cpp__
#define __queue_cpp__

#include "queue.h"

#include <iostream>
using namespace std;

Queue::Queue() {
    this->_head = this->_tail = 0;
    this->_size = 0;
}

int Queue::is_empty() {
    return this->_size == 0;
}

int Queue::size() {
    return this->_size;
}

void Queue::enqueue(void* content) {
    Node* node = new Node(content);
    this->_size++;

    if(this->_head == 0) {
        this->_head = this->_tail = node;
    } else {
        this->_tail->setNext(node);
        this->_tail = node;
    }
}

void* Queue::dequeue() {
    if(this->is_empty())
        return 0;

    void* content = this->_head->getContent();
    this->_head = this->_head->getNext();
    this->_size--;
    return content;
}

void* Queue::lookup() {
    if(this->is_empty())
        return 0;

    return this->_head->getContent();
}

#endif
