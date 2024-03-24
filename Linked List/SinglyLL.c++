#include<iostream>
using namespace std ;

class Node{
    public :
    int data ;
    Node* next ;

    Node(int data){
        this->data = data ;
        this->next = nullptr ;
    }
    
};

void insertAtHead(Node* &head , int d){

    Node*temp = new Node(d);
    temp->next = head ;
    head = temp ;

}

void insertAtTail(Node* &tail ,int d){
    Node* temp = new Node(d);
    tail->next = temp ;
    tail = temp ;
}
void insertAtposition(int position , int d , Node*&head,Node*&tail){
   
    int count = 1 ;
    if(position == 1){
        insertAtHead(head,d);
        return ;
    }
    Node*temp = head ;
    while(count < position-1){
        temp = temp->next;
        count++;
    }

    if(temp->next == nullptr){
        insertAtTail(tail,d);
        return ;
    }

    Node* newnode = new Node(d);
    newnode->next = temp->next;
    temp->next = newnode;
}
void deletenode(Node*&head ,Node*&tail, int position){
    Node* previous = nullptr ;
    Node*current = head ;
    if(position == 1){
        
        head = current->next ;
        delete current ; 
        return ; 
    }
    
    int count = 1 ;
    while(count < position ){
        previous = current ;
        current = current->next ;
        count++ ;
    }
    if(current == nullptr){
        return ;
    }
    previous->next = current->next ;
    if (previous->next == nullptr) 
        tail = previous;
    delete current ;
}

void print(Node*&head){
    Node*temp = head ;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next ;
    }
    cout<<endl;
}

int main(){

    Node* node1 = new Node(10); //creation of 1st node

    Node* head = node1 ; // head pointer of node 1 
    Node* tail = node1 ; // tail pointer of node 1

    insertAtHead(head,20); // to insert next node at head of previous node

    insertAtTail(tail,2020); // to insert next node at tail of previous node 

    insertAtposition(3,23,head,tail); // to insert any element at desired position

    print(head); // to print whole linkedlist.
    return 0 ;
}