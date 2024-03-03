#include<iostream>
using namespace std ;

bool findkey(int *arr,int size ,int key){
    //base case
    if(size == 0){
        return 0 ;
    }
    if(arr[0] == key){
        return 1 ;
    }

    return findkey(arr+1,size-1,key);
}

int main(){
    int arr[5] = {2,5,6,8,9};
    int key = 10 ;                                                             
    bool ans = findkey(arr,5,key);
    if(ans){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

}