#include<iostream>
using namespace std ;

int alternate(int arr[],int size){   // function to swap alternate elements of an array

    for(int i = 0 ; i < size-1 ; i +=2){
        swap(arr[i],arr[i+1]);
    }

    for(int i = 0 ; i < size ; i++){ // to print updated array 
        cout<<arr[i]<<" ";
    }
    return 0 ;
}

int main(){

    int size ;
    cin>>size ;    // input of array size
    int arr[size];

    for(int i = 0 ; i < size ; i++){   // input of array elements 

        cin>>arr[i] ;
    }

    alternate(arr,size);  // calling user defined function

    return 0 ;
}