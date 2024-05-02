#include<iostream>
using namespace std ;

class DeQueue{
    int size ;
    int *arr ;
    int front ;
    int rear ;

    public:
    DeQueue(int size){
        this->size = size ;
        arr = new int[size] ;
        front = -1; 
        rear = -1 ;
    }

    bool isempty(){
        if(front == -1){
            return true ;
        }
        else{
            return false ;
        }
    }

    void push_front(int data){

        if( (front == 0 && rear == size-1) || (rear == (front -1)%(size -1)) ){
            cout<<"Queue is full"<<endl;
        }
        else if(front == -1){
            front = 0 ;
            rear = 0 ;
        }
        else if(front == 0 && rear != size-1){
            front = size - 1 ;
        }
        else{
            front--;
        }
        arr[front] = data ;
    }

    void push_back(int data){
        if((front == 0 && rear == size-1) || (rear == (front -1)%(size -1))){
            cout<<"Queue is full"<<endl;
        }
        else if(front == -1){
            front = 0 ;
            rear = 0 ;
        }
        else if(rear == size -1 && front != 0){
            rear = 0 ;
        }
        else{
            rear++;
        }
        arr[rear] = data ;
    }

    int Qfront(){
        if((front == 0 && rear == size-1) || (front == (rear -1)%(size -1))){
            return -1 ;
        }
        else{
            return arr[front];
        }
    }

    int Qback(){
        if((front == 0 && rear == size-1) || (front == (rear -1)%(size -1))){
            return -1 ;
        }
        else{
            return arr[rear];
        }

    }

    int Pop_front(){
        int ans = -1 ;
        if((front == 0 && rear == size-1) || (rear == (front -1)%(size -1))){
            return ans;
        }
        else if(front == 0 && rear != size -1){
            ans = arr[front];
            front = size - 1 ;
        }
        else if(front == size -1 && rear != 0){
            ans = arr[front];
            front = 0 ;
        }
        else{
            ans = arr[front];
            front++;
        }
        return ans ;
    }
    void print(){
        for(int i = 0 ; i < size ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl ;
    }
};

int main(){

    DeQueue Q(4);

   Q.push_front(10);
   Q.print();
   Q.push_front(20);
   Q.print();
   Q.push_back(30);
   Q.print();
   cout<<Q.Qfront()<<endl ;
   cout<<Q.Qback()<<endl;
   Q.push_back(50);
    cout<<Q.Qfront()<<endl ;
   cout<<Q.Qback()<<endl;


   Q.print();

   

    return 0 ;
}