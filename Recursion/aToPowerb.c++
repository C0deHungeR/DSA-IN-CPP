#include<iostream>
using namespace std ;
#define int long long
int power(int a ,int b){
    if(b == 0){
        return 1 ;
    }
    if(b == 1){
        return a ;
    }
    //recursive call
    int ans = power(a,b/2);

    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }

}
signed main(){
    int a = 10 ;
    int b = 11 ;
    cout<<"Answer is : "<<power(a,b)<<endl;
}