#include<iostream>
using namespace std ;

class Queue{
    public :

    int *arr ;
    int size ;
    int front ;
    int rear ;

    Queue(int size){
        this->size = size ;
        front =  0 ;
        rear = 0 ;
        arr = new int[size];
    }

    //to check an empty queue 
    bool isempty(){
        if(front == rear){
            return true ;
        }
        else{
            return false ;
        }
    }

    // to add data 
    void enqueue(int data){
        if(rear == size){
            return ;
        }
        else{

            arr[rear] =  data ;
            rear++;
        }
    }

    int dequeue(){ // to remove front element 
        int ans = -1 ;

        if(front == rear){
            return -1 ;
        }

        else{
            ans = arr[front] ;
            front++;
            if(front == rear){
                front = 0 ;
                rear = 0 ;
            }
        }
        return ans ;
    }

    // to show front element 
    int Qfront(){ 
        if(front == rear){
            return -1 ;
        }
        else{
            return arr[front];
        }
    }
}; 

int main(){
    Queue Q(3);

    cout<<Q.isempty()<<endl ; // initially empty ---> 1 will be printed 

    Q.enqueue(10);

    cout<<Q.isempty()<<endl ; // now it will return 0 ;

    cout<<"Element at front is : "<<Q.Qfront()<<endl;

    Q.enqueue(11); // element added

    cout<<"Element at front is : "<<Q.Qfront()<<endl; // front will remain the same 

    Q.dequeue(); // front element removed 

    cout<<"Element at front is : "<<Q.Qfront()<<endl; //front element is now 11 ;

    return 0 ;
}