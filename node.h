#ifndef __node_h__
#define __node_h__

class Node {
private:
    void* content;
    Node* next;

public:
    Node();
    Node(void* content);

    void* getContent();
    void setContent(void* content);
    Node* getNext();
    void setNext(Node* next);
};

#endif
