#include<iostream>
using namespace std ;
// question is to find the sum and products of digits of a number and to substract it

// function to find product
int getproduct(int n){
    int product = 1 ;
    while(n != 0){
        product *= (n % 10) ;
        n = n / 10 ;
    }
    return product ; 
}

// function to get sum of digits
int getsum(int n){
     int sum = 0 ;
    while(n != 0){
        sum += n % 10 ;
        n = n / 10 ;
    }
    return sum ;

}

int main(){

    int number ;
    cin>>number;  // to get number 

    int product =getproduct(number); // calling function to get product of digits 
    int sum  = getsum(number);   // calling function to get sum of digits

    int ans = product-sum;

    cout<<"Product of digit  - sum of digits is : "<<ans;

    
    return 0 ;
}
