#include<iostream>
using namespace std ;

class Heap{
    public :
    int *arr;
    int capacity ;
    int size ;

    Heap(int capacity){
        this->arr = new int[capacity];
        this->size = 0 ;
        this->capacity = capacity ;
    }

    void insert(int val){
        if(size == capacity){
            cout<<"Heap overflow"<<endl;
            return ;
        }

        size++;
        int index = size ;
        arr[index] = val ;
        while(index > 1){
            int parentIndex = index/2 ;
            if(arr[index] > arr[parentIndex]){
                swap(arr[index],arr[parentIndex]);
                index = parentIndex ;
            }else{
                break ;
            }
        }
        
    }

    void PrintHeap(){
        for(int i = 1 ; i <= size ; i++){
            cout<<arr[i]<<" ";
        }
    }

    int deleteFromHeap(){
        if(size == 0){
            cout<<"Heap is underflow"<<endl;
            return -1;
        }
        int ans = arr[1];
        arr[1] = arr[size];
        size--;
        int index = 1 ;
        while(index < size){
            int leftIndex = 2*index ;
            int rightIndex =2*index +1 ;
            int largestIndex = index ;
            if(leftIndex <= size && arr[largestIndex] , arr[leftIndex]){
                largestIndex = leftIndex ;
            }
            if(rightIndex <= size && arr[largestIndex] < arr[rightIndex]){
                largestIndex = rightIndex ;
            }

            if(largestIndex == index){
                break ;
            }else{
                swap(arr[largestIndex],arr[index]);
                index = largestIndex ;
            }
        }
        return ans ;

    }
};

int main(){
    Heap h(10);
    h.insert(20);
    h.insert(30);
    h.insert(40);
    h.insert(50);
    h.insert(6);
    h.insert(78);
    h.PrintHeap();
    cout<<endl;
    cout<<"Deleted Element : "<<h.deleteFromHeap()<<endl;
    h.PrintHeap();
    return 0 ;
    //Tc of creation O(N);
    //tc of deletion and insertion O(nlogn);
}