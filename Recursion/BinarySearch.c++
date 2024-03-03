#include<iostream>
using namespace std ;

bool ispresent(int *arr,int s,int e,int key){

    if(s > e){
        return false ;
    }
    int mid = s+ (e-s)/2 ;
    if(arr[mid] == key){
        return true ;
    }
    if(arr[mid] < key){
        return ispresent(arr,mid+1,e,key);
    }
    else{
        return ispresent(arr,s,mid - 1,key);
    }
}

int main(){
    int arr[10] = {2,5,6,8,9,10,12,15,17,20};
    int key = 10 ;  
    bool ans = ispresent(arr,0,9,key);
    if(ans){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
    return 0 ;
    
}