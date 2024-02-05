#include<iostream>
using namespace std ;

int findUnique(int *arr, int size)
{
    int ans = 0 ;
   for(int i = 0 ; i < size ; i++){
       ans = ans ^ arr[i];
   }
   return ans ;
}

int main(){
  // array of size N is given where N = 2M+1 , M elements are twice and 1 element is unique

    int arr[5]={1,2,3,2,1};

    findUnique(arr,5) ;         // calling function
}