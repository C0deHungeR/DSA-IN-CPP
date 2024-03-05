#include<iostream>
using namespace std ;
//quick sort
//select an element and place it to its right place
int  partition(int arr[],int s ,int e){

    int pivot = arr[s] ;
    int count = 0 ;
    for(int i = s+1 ; i <=e ; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }

    int pivotindex = s + count ;
    //place pivot at its right place

    swap(arr[pivotindex],arr[s]);
    int i = s ;
    int j = e ;
    while(i < pivotindex && j > pivotindex){
        if(arr[i] < pivot){
            i++;
        }
        if(arr[j] > pivot){
            j--;
        }
        if(i < pivotindex && j > pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex ;
}
void quickSort(int arr[],int s , int e){
    //base case
    if(s >= e){
        return ;
    }
    int  p = partition(arr,s,e) ;

    //recursive call
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e) ;

}

int main(){
    int arr[5] = {5,4,3,2,1};
    int n = 5 ;
    quickSort(arr,0,n-1);

    for(int i = 0 ; i < n ;i++){
        cout<<arr[i]<<" ";
    }
}