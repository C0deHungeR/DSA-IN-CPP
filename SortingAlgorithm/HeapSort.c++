#include<iostream>
using namespace std ;

void Heapify(int arr[],int size , int index){
    int largest = index ;
    int right = 2*index + 1 ;
    int left = 2*index ;

    if(left <= size && arr[largest] < arr[left] ){
        
        largest = left ;
    }
    if(right <= size && arr[largest] < arr[right]){
        largest = right ;
    }
    if(largest != index){
        swap(arr[largest],arr[index]);
        Heapify(arr,size,largest);
    }
    else{
        return ;
    }
}
void HeapSort(int arr[],int n){
    int size = n ;
    while(size > 1){
       swap(arr[size],arr[1]);

        size-- ;
        Heapify(arr,size,1) ;
    }

}
int main(){
    int arr[6] = {-1,0,3,5,4,7};

    for(int i = 5/2 ; i > 0 ; i--){
        Heapify(arr,5,i);
    }
    cout<<endl;

    HeapSort(arr,5);
    cout<<"after sorting"<<endl ;
    for(int i = 1 ; i < 6 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl ;
}