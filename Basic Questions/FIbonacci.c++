#include<iostream>
using namespace std ;

// function to print fibonacci series 
void printseries(int n){

    if(n == 2){  // if  only two elements are asked
        int a = 0 ;
        int b = 1 ;
        cout<<a<<" "<<b ;
    }

    else if(n > 2){  // if more than two elements are asked

        int a = 0 ;
        int b = 1;

        cout<<a<<" "<<b<<" ";  // initially printing strting two elements 

        for(int i = 1 ; i <= n - 2 ; i++){  // code for remaining elements
            int nextterm = a + b ;
            cout<<nextterm<<" " ;
            a = b ;
            b = nextterm ;
        }
    }

}

int main(){
    // to print fibonacci series upto n elements 
    int n ;
    cin>>n;

   printseries(n);   // calling function to print series 

   return 0 ;

}