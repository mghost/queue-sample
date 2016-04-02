#ifndef __node_cpp__
#define __node_cpp__

#include "node.h"

Node::Node() {
    Node(0);
}

Node::Node(void* content) {
    this->content=content;
    this->next=0;
}

//////////////////////////////////////////////////

void* Node::getContent() {
    return this->content;
}

void Node::setContent(void* content) {
    this->content = content;
}

Node* Node::getNext() {
    return this->next;
}

void Node::setNext(Node* next) {
    this->next = next;
}

#endif
