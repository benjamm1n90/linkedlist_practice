#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList {
private:
    Node* head;

public:
    LinkedList();
    ~LinkedList();

    void insertAtBeginning(int value);
    void insertAtEnd(int value);
    void deleteNode(int value);
    bool search(int value);
    void reverse();
    void display();
};

#endif
