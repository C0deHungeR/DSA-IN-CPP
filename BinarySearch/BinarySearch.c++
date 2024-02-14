#include<iostream>
using namespace std ;
int main(){
    // array should be monotonic to apply binary search
    int arr[10] = {1,2,3,4,5,6,7,8,9,10} ;
    int target = 8 ;

    int start = 0 ;
    int end  = 9 ;
    int mid = start + (end - start)/2 ;
   
    while(start <= end){
        if(arr[mid] == target){
            cout<<"Index is : "<<mid ;
            break ;
        }
        else if(arr[mid] < target){
            start = mid + 1 ;
        }
        else{
            end = mid -1 ;
        }
        mid = start + (end - start)/2 ;
    }
    return 0 ;

}