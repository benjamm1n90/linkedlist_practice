#include "linkedlist.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::~LinkedList() {
    delete head;
}

// Task 1: Insert at the beginning
void LinkedList::insertAtBeginning(int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

// Task 2: Insert at the end
void LinkedList::insertAtEnd(int value) {
    Node* newNode = new Node(value);
    Node* current = head;
    while(current->next) {
        current = current->next;
    }
    current->next = newNode;
}

// // Task 3: Delete a node by value
// void LinkedList::deleteNode(int value) {
//     // TODO: Implement this
// }

// // Task 4: Search for a value
// bool LinkedList::search(int value) {
//     // TODO: Implement this
//     return false; // Placeholder
// }

// // Task 5: Reverse the linked list
// void LinkedList::reverse() {
//     // TODO: Implement this
// }

// Task 6: Display the list
void LinkedList::display() {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
}
