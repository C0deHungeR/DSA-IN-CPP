#include<iostream>
#include<math.h>

using namespace std ;
int main(){
    int number ;   // to get input of binary number 
    cin>>number;
    int ans = 0 ;
    int i = 0 ;
    
    while( number != 0){
        int digit = number % 10 ;

        if(digit == 1){
            ans = ans + pow(2,i) ;
        }
        number = number / 10 ;
        i++;

    }
    cout<<"decimal is : "<<ans;
}
