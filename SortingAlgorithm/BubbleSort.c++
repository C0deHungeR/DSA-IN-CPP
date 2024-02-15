// Bubble sort 
#include<iostream>
using namespace std ;
int main(){

    int arr[10] = {1,10,4,5,7,9,0,9,8,7} ;

    for(int i = 0 ; i < 10-1 ; i++){

        for(int j = 0 ; j < 10-1-i ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    // to print array 
    for(int i = 0 ; i < 10 ; i++){
        cout<<arr[i]<<" ";
    }
}