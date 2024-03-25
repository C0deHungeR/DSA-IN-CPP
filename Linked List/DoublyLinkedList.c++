#include<iostream>
using namespace std ;
class Node{
    public : 
    int data ;
    Node*prev ;
    Node* next ;
    Node(int data){
        this->data = data ;
        prev = nullptr ;
        next = nullptr ;
    }
};
void print(Node* head){
    Node*temp = head ;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next ;
    }
    cout<<endl ;
}
void insertAtHead(Node*&head , int d){
    if(head == nullptr){
        Node* node = new Node(d) ;
        head = node ;
    }
    else{
    Node*temp = new Node(d) ;
    temp->next = head ;
    head->prev = temp ;
    head = temp ;
    }
}
void insertAtTail(Node*&tail,int d) {
    if(tail == nullptr){
        Node* node = new Node(d) ;
        tail = node ;
    }
    else{
    Node*temp = new Node(d);
    tail-> next = temp ;
    temp->prev = tail ;
    tail = temp ;
    }
}
void insertAtPosition(Node*&head ,Node*&tail , int d,int position){

    if(position == 1 ){
        insertAtHead(head,d);
        return ;
    }
    int count = 1 ;
    Node*temp = head ;
    while(count < position - 1){
        temp = temp->next ;
        count++;
    }
    if(temp->next == nullptr){
        insertAtTail(tail,d);
        return ;
    }
    Node*newnode = new Node(d);
    newnode->next = temp->next  ;
    temp->next->prev = newnode ;
    temp->next = newnode ;
    newnode->prev = temp ;
}
void deleteNode(Node*& head, Node*& tail, int position) {
    if (head == nullptr)
        return; // Empty list, nothing to delete

    Node* current = head;
    if (position == 1) {
        head = current->next;
        if (head != nullptr)
            head->prev = nullptr;
        else
            tail = nullptr; // Update tail if the list becomes empty
        delete current;
        return;
    }

    int count = 1;
    while (current != nullptr && count < position) {
        current = current->next;
        count++;
    }

    if (current == nullptr)
        return; // Position exceeds the length of the list

    if (current == tail) {
        tail = current->prev;
        tail->next = nullptr;
        delete current;
        return;
    }

    current->prev->next = current->next;
    current->next->prev = current->prev;
    delete current;
}

int main(){
    Node*node1 = new Node(1);
    Node*head = node1 ;
    Node*tail = node1 ;
    print(head);
    insertAtHead(head,0);
    print(head);
    insertAtTail(tail,2);
    print(head);
    insertAtPosition(head,tail,30,3);
    print(head);
    deleteNode(head,tail , 4);
    print(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    
    return 0 ;
}