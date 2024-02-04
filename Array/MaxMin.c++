#include<iostream>
using namespace std ;

int getMax(int arr[],int num){   // function to get maximun element 
    int max = INT8_MIN ;
    for(int i = 0 ; i < 10 ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max ;
}

int getMin(int arr[],int num){  // function to get minimum element 
    int min = INT16_MAX ;

    for(int i = 0 ; i < 10 ; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main (){

    int arr[10] ;
    // for array elements input ;
    for(int i = 0 ;i < 10 ; i++){
        cin>>arr[i];
    }

    // to find maximum element of an array
    cout<<"Maximum element is : "<<getMax(arr,10)<<endl ;
    // to get minimum element
    cout<<"Minimum element is : "<<getMin(arr,10)<<endl ;
}