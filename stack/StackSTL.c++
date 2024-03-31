#include<iostream>
#include<stack>
using namespace std; 
// implementation of stack using stl 

int main(){

    stack<int> s1 ; // declaration of stack

    s1.push(10); // to push element in stack 
    s1.push(20);
    s1.push(30);

    cout<<s1.top()<<endl; // to print the top element of stack

    s1.pop(); // to remove element from stack

    cout<<s1.top()<<endl;
    cout<<s1.size()<<endl; // t0 get size of stack

    if(s1.empty()){ // to check wether stack is empty or filled 
        cout<<"stack is enpty"<<endl;

    }
    else{
        cout<<"stack is not empty"<<endl;
    }
    return 0 ;
}