#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Stack {
public:
    Node* tail;

    Stack() {
        tail = nullptr;
    }

    void push(int element) {
        Node* temp = new Node(element);
        if (tail == nullptr) {
            tail = temp;
        }
        else {
            temp->next = tail;
            tail = temp;
        }
    }

    void pop() {
        if (tail == nullptr) {
            cout << "Stack underflow" << endl;
            return;
        }
        Node* temp = tail;
        tail = tail->next;
        delete temp;
    }

    int peek() {
        if (tail == nullptr) {
            cout << "Stack is empty" << endl;
            return -1; // Return some default value indicating stack is empty
        }
        return tail->data;
    }

    bool isEmpty() {
        return tail == nullptr;
    }
};

int main() {
    Stack s1;
    s1.push(20);
    cout << s1.peek() << endl;
    s1.pop();
    cout << s1.isEmpty() << endl;
    cout << s1.peek() << endl;
    s1.push(20);
    s1.push(21);
    s1.push(22);
    s1.push(23);
    cout << s1.peek() << endl;

    return 0;
}
