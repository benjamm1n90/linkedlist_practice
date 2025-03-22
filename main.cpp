#include "LinkedList.h"
#include <iostream>
using namespace std;

int main() {
    LinkedList list;
    
    list.insertAtBeginning(10);
    list.display();
    list.insertAtBeginning(5);
    list.display();
    list.insertAtEnd(20);
    list.display();
    // list.insertAtEnd(25);
    // list.display();

    // cout << "Searching for 20: " << (list.search(20) ? "Found" : "Not Found") << endl;
    // cout << "Searching for 15: " << (list.search(15) ? "Found" : "Not Found") << endl;

    // list.deleteNode(10);
    // cout << "After deleting 10:" << endl;
    // list.display();

    // cout << "Reversing list:" << endl;
    // list.reverse();
    // list.display();

    return 0;
}
