#include<iostream>
using namespace std ;

class CircularQueue{
    
    int size ;
    int *arr ;
    int front ;
    int rear ;

    public :
    CircularQueue(int size){
        this->size = size ;
        arr = new int[size];
        front = -1 ;
        rear = -1 ;
    }

    bool isempty(){
        if(front == -1 && rear == -1){
            return true ;
        }
        else{
            return false ;
        }
    }

    void enqueue(int value){
      if(  (front == 0 && rear == size -1) || (rear == (front-1)%(size-1)) ){
          // stack is full 
          cout<<"Queue is full"<<endl;
      }
      else if(front == -1){
          rear = 0 ;
          front = 0 ;
      }
      else if(rear == size-1 && front != 0){
          rear = 0 ;
          
      }
      else{
          rear++;
      }
      arr[rear] = value ;
    }

    int dequeue(){
        if(front == -1){
            return -1 ;
        }

       int ans = arr[front] ;

       arr[front] = -1 ;

       if(front == rear){
           front = rear = -1 ;
       }
       else if(front == size -1){
           front = 0 ;
       }
       else{
           front++ ;
       }
       return ans ;
    }

    int Qfront(){
        
        if(front != -1){
            return arr[front];
        }
        else{
            cout<<"Queue is empty"<<endl ;
            return -1 ;
        }
    }
};

int main(){
    CircularQueue Q(3);

    Q.enqueue(1);
    Q.enqueue(2);
    cout<<Q.Qfront()<<endl;

    Q.enqueue(3);
    Q.enqueue(4);

    Q.dequeue();

    Q.dequeue();
    Q.dequeue();

    cout<<Q.isempty()<<endl;

    return 0 ;
}