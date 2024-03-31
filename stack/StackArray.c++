#include<iostream>
using namespace std ;

class Stack{
    public :
    //properties 
    int data ;
    int*arr;
    int top ;
    int size ;

    //behaviours 

    Stack(int size){
        this->size = size ;
        arr = new int[size];
        this->top = -1;

    }
    void push(int element){ // function to push elements
       if(size - top > 1){
        top++;
        arr[top] = element ;
       }
       else{
        cout<<"stack overflow"<<endl ;
       }
    }

    void pop(){ // function to remove elements
        if(top >= 0){
            top--;
        }
        else{
            cout<<"stack is underflow"<<endl;
        }
    }
    int peak(){ // to print top element of stack
        if(top >= 0){
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1 ;
        }
    }
    bool isempty(){ // to check empty or not 
        if(top == -1){
            return true ;
        }
        else{
            return false ;
        }
    }
};

int main(){
    Stack s1(4);
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);

    cout<<s1.peak()<<endl;
    s1.pop();
    cout<<s1.peak()<<endl;
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    cout<<s1.isempty()<<endl;
    return 0 ;
}