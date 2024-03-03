#include<iostream>
using namespace std ;

int sum(int *arr,int n){
    //base case
    if(n == 0){
        return 0 ;
    }
    if(n == 1){
        return arr[0];
    }


    int ans = arr[0] + sum(arr+1,n-1) ;
    return ans ; 
    
}

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    cout<<sum(arr,10)<<endl;
}
