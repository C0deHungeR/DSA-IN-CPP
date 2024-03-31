#include <iostream>

using namespace std;
//doubly circular linked list 
class Node{
    public : 
    int data ;
    Node*next ;
    Node*prev ;

    Node(int d){
        this->data = d ;
        this->next = nullptr;
        this->prev = nullptr ;
    }
};

void Insert(Node*&tail, Node*&head, int element , int d){
    Node*newnode = new Node(d) ;

    if(tail == nullptr){
        tail = newnode ;
        head = newnode ;
        newnode->prev = newnode ;
        newnode->next = newnode ;
    }
    else{
        Node*temp = tail ;
        do{
            if(temp->data == element){
                newnode->next = temp->next;
                temp->next->prev = newnode;
                temp->next = newnode;
                newnode->prev = temp;
                if (temp == tail) // Update tail if inserted after the last node
                    tail = newnode;
                if (temp == head && element == tail->data) // Update head if inserted before the head node
                    head = newnode;
                
                return ;
            }
            temp = temp->next ;
        }while(temp != tail);
    }
}
void print(Node* head) {
    if (head == nullptr)
        return;

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}




int main(){
    Node*node1 = new Node(0);
    Node*head = nullptr ;
    Node*tail = nullptr ;
    Insert(tail,head ,0,10);
    Insert(tail,head,10,20);
    print(head);

}


