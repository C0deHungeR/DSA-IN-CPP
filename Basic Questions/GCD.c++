#include<iostream>
using namespace std ;
int gcd(int a , int b){
    if(a == 0){
            return b ;
        }
        if(b == 0){
            return a ;
        }
    
    while(a != b){
        
        if(a < b){
            b = b-a ;
        }
       else{
            a = a-b ;
        }
    }
}

int main(){
  int a = 72 ;
  int b = 24 ;
  cout<<gcd(a,b)<<endl;
  return 0 ;

}
