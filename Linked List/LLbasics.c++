#include<iostream>
using namespace std;

// Definition of a Node class representing nodes in a linked list
class Node {
public:
    int data;       // Data stored in the node
    Node* next;     // Pointer to the next node in the linked list

    // Constructor to initialize data and next pointer
    Node(int dataValue) : data(dataValue), next(nullptr) {}
};

int main() {
    Node* node1 = new Node(10); // Dynamically allocate memory for a new Node object with data 10
    cout << node1->data << endl; // Print the data of node1 (should print 10)
    cout << node1->next << endl; // Print the memory address stored in the next pointer of node1 (should print nullptr)
    delete node1; // Deallocate memory to avoid memory leaks (optional in this example since it's a small program)
    return 0; // Exit main function
}
