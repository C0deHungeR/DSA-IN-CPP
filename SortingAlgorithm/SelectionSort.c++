// selection sort 

#include<iostream>
using namespace std ;

int main() {
    // unsorted array
    int arr[10] ={10,8,7,4,5,64,32,68,90,1000};

    for(int i = 0 ; i < 10-1 ;i++){

        int minindex = i ;  // lets assume first element is minimum
        for(int j = i+1 ; j < 10 ; j++){

            if(arr[minindex]>arr[j]){

                minindex = j ; // correct the minimum index after compairing
            }

        }
        swap(arr[minindex],arr[i]);
    }
    // to print sorted array
    
    for(int i = 0 ; i < 10 ; i++){
        cout<<arr[i]<<" ";
    }

}