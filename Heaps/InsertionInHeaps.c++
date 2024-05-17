#include<iostream>
using namespace std ;

class Heap{
    public :
    int arr[100];
    int size; 

    Heap(){
        size = 0;
        arr[0] = -1; // indicates no value 
    }
    void insert(int data){
        size = size + 1 ;
        int index = size ;
        arr[index] = data ;

        while(index > 1){
            int parent = index/2 ;
            if(arr[index] > arr[parent]){
                swap(arr[index],arr[parent]);
                index = parent ;
            }else{
                return ;
            }
        }
    }
    void print(){
        for(int i = 1 ;i <= size ; i++ ){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void DeletefromHeap(){

        if(size == 0){
            cout<<"Nothing to delete"<<endl;
        }

        arr[1] = arr[size];
        size-- ;

        int i = 1 ;
        while( i < size){
            int rightIndex = 2*i + 1  ;
            int leftIndex = 2*i  ;
            if(rightIndex < size && arr[rightIndex] > arr[i]){
                swap(arr[rightIndex],arr[i]);
                i = rightIndex ;
            }
            else if(leftIndex < size && arr[leftIndex] > arr[i] ){
                swap(arr[leftIndex],arr[i]);
                i = leftIndex ;
            }
            else{
                return ;
            }
        }
    }
};
int main(){
    Heap h ;
    h.insert(10);
    h.insert(20);
    h.insert(3);
    h.insert(2);
    h.insert(100);
    h.print();
    h.DeletefromHeap();
    cout<<"After deletion :"<<endl ;
    h.print();
    

}

    
