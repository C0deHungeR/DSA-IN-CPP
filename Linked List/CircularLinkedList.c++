#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        this->data = d ;
        this->next = nullptr ;
    }
};

void insert(Node*& tail, int element, int d) {
    // Handle empty list
    if (tail == nullptr) {
        Node* newnode = new Node(d);
        tail = newnode;
        newnode->next = newnode;  // Circular for single element
        return;
    }

    // Search for the element
    Node* temp = tail;
    do {
        if (temp->data == element) {
            // Insert the new node
            Node* newnode2 = new Node(d);
            newnode2->next = temp->next;
            temp->next = newnode2;

            // Update tail if insertion happens at the end
            if (temp == tail) {
                tail = newnode2;
            }
            return; // Exit after insertion
        }
        temp = temp->next;
    } while (temp != tail);

    // Element not found
    cout << "Element not found in the list." << endl;
}

void print(Node* tail) {
    if (tail == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = tail;
    do {

        cout << temp->data << " ";
        temp = temp->next;

    } while (temp != tail);
    cout << endl;
}

void deletion(Node*&tail,int value){
    //empty list 
    if(tail == nullptr){
        cout<<" list is empty "<<endl;
        return ;
    }
    else{
        // for non empty linked list 
        Node*prev = tail ;
        Node*current = prev->next ;

        while(current->data != value){
            prev = current ;
            current = current ->next ;
        }
        if(tail ==  current){
            tail = nullptr ;
            
        }
        else if(tail == current){
            tail = prev ;
        }

        prev->next = current->next ;
        current->next = nullptr ;
        delete current ;
    }

}

int main() {
    Node* tail = nullptr;

    insert(tail, 0, 1);
    print(tail);
    insert(tail, 1, 2);
    print(tail);
    insert(tail,2,3);
    print(tail);
    deletion(tail,1);
    print(tail);
    return 0;
}
