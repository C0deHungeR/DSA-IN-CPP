#include<iostream>
using namespace std ;

#define Pi 3.14

//what is macro 
/*--> Macros in C++ are preprocessor directives that allow you to define symbolic constants or short functions. These macros are processed by the preprocessor before the compilation of the actual code begins. Macros are typically defined using the #define directive.*/

int main(){
    int r = 10 ; //radius of circle
    double area = Pi*r*r;
    cout<<area<<endl;
}