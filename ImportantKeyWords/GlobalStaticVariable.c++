#include<iostream>
using namespace std ; 

int global ; // global variable --> assecible to every functions 
/*
Global variables are the variables that are declared outside of any function or class and can be accessed by any part of the program. They are generally declared at the beginning of the source file after the header file. They are available throughout the lifetime of a program and accessible from anywhere within the program.
*/

void update(int &x){
    x++;
    cout<<x<<endl;
}
int main(){

    global = 10 ;
    cout<<global<<endl;
    update(global);
    cout<<global <<endl;

    
}