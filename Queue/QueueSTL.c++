#include<iostream>
using namespace std ;
#include<queue>
int main(){

    queue<int> q1 ; 

    q1.push(10); // to push element
    cout<<"Front of q is  :" <<q1.front()<<endl ;
    q1.push(11);
    q1.push(12);
    cout<<"Front of q is  :" <<q1.front()<<endl ;

    q1.pop();// removes first element 

    cout<<"Front of q is  :" <<q1.front()<<endl ;

    if(q1.empty()){// to check if empty
        cout<<"q is empty"<<endl;
    }
    else{
        cout<<"q is not empty "<<endl;
    } 
    return 0 ;
}