#include<iostream>
using namespace std  ;

int Decimaltobinary(int n){
    int count1 = 0 ; 
    while(n != 0){
        int bit = n % 2 ;
        if(bit == 1){
            count1++;
        }
        n = n / 2;
    }
    return count1 ;
}

int main(){

    int n ;
    cin>>n;  // taking input of number 
    int count = Decimaltobinary(n) ;
    // by way 1 
    cout<<"Number of 1 is : "<<count<<endl;

    // another way 
    // we will check last bit 
    int count1 = 0 ;
    while(n !=0 ){
        if(n&1){
            count1++;
        }
        n = n >> 1 ;
    }
    cout<<"number of 1 is : "<<count1<<endl;

}