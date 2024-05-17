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
int main(){
    int arr[6] = {-1,54,53,55,52,50};
    int n = 5 ;
    for(int i = n/2 ; i > 0 ; i--){
        Heapify(arr,n,i);
    }
    cout<<endl;
    for(int i =1 ; i <= n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0 ;
}