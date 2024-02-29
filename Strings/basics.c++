#include<iostream>
using namespace std ;
int main(){
    char name[20];
    cout<<"name:";

    cin>>name; // to get input of string but words after space will not be stored

    // what if i add a null char in between name 
    name[2] = '\0';
    cout<<name<<endl;  // name till 
}