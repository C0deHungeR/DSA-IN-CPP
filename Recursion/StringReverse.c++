#include<iostream>
#include<string>
using namespace std ;
// reverse a string using ReverseString
void ReverseString(string &str,int size,int i){
    if(i > (size-i-1)){
        return ;
    }

    else{
        swap(str[i],str[size-i-1]);
        i++ ;
        
       // cout<<"call reversed : "<<str<<endl;     // to see how its working 
    }
    return ReverseString(str,size,i);
}

int main(){
    string s = "ABCDE";
    int n = s.size() ;
    ReverseString(s,n,0);
    cout<<s<<endl;
}
