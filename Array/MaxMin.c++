#include<iostream>
using namespace std ;

int getMax(int arr[],int num){   // function to get maximun element 
    int maxi = INT8_MIN ;
    for(int i = 0 ; i < num ; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }

    // can also be found by using this function

   /* for(int i = 0 ; i < num ; i++){

        maxi = max(maxi ,arr[i]) ;

    } */
    return maxi ;
}

int getMin(int arr[],int num){  // function to get minimum element 
    int mini = INT16_MAX ;

    for(int i = 0 ; i < 10 ; i++){
        if(arr[i] < mini){
            mini = arr[i];
        }
    }

     // can also be found by using this function

   /* for(int i = 0 ; i < num ; i++){

        mini = min(mini ,arr[i]) ;

    } */
    return mini;
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