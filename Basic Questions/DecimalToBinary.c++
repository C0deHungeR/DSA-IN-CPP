#include<iostream>
#include<math.h>
using namespace std ;
int main(){
    //for positive number only

    int number;
    cin>>number;
    int ans = 0 ;
    int i = 0 ;
    if(number >= 0){
    while(number!=0){
        int digit = number & 1;
        ans = digit*pow(10,i) + ans;
        number = number >> 1 ;
        i++;
    }
    cout<<"Binary is : "<<ans<<endl;
    }
    else{
        cout<<"Enter a positive number";
    }
    
}