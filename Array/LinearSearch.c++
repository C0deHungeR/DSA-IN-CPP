#include<iostream>
using namespace std ;

bool ispresent(int arr[],int size , int num){
    for(int i = 0 ; i <size ; i++){
        if(arr[i] == num){
            return 1 ;
            break ;
        }
    }
    return 0 ;
}

int main(){
    int arr[10] = {1,22,33,44,55,667,89,0,32,10} ;

    int key ; // number to be searched
    cin>>key ;

   cout<<ispresent(arr,10,key);

    return 0 ;
}