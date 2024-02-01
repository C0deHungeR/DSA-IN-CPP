#include<iostream>
using namespace std ;
int main(){

    int number ; 
    cin>>number ; // input of a number 

    bool isprime = 1 ;

    for(int i = 2 ; i < number ; i++){

        if(number % i == 0){
            cout<<number<<  " is not prime number.";
            isprime = 0 ;
            break ;
        }
    }

   if(isprime == 1){

    cout<<number<<" is prime ." ;

   }

    return 0 ;
}