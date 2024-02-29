#include<iostream>
using namespace std ;
/*
what is inline function :- When the program executes the function call instruction the CPU stores the memory address of the instruction following the function call, copies the arguments of the function on the stack, and finally transfers control to the specified function. The CPU then executes the function code, stores the function return value in a predefined memory location/register, and returns control to the calling function. This can become overhead if the execution time of the function is less than the switching time from the caller function to called function (callee). 

For functions that are large and/or perform complex tasks, the overhead of the function call is usually insignificant compared to the amount of time the function takes to run. However, for small, commonly-used functions, the time needed to make the function call is often a lot more than the time needed to actually execute the function’s code. This overhead occurs for small functions because the execution time of a small function is less than the switching time.
*/

//inline function declaration
inline int  getMax(int&a,int&b){
    return (a > b) ? a : b ;
}
int main(){
    int a = 2,b = 14 ; 
    int ans ;
    ans = getMax(a,b) ;
    cout<<ans<<endl ;
    a++;
    b++;
    ans = getMax(a,b) ;
    cout<<ans<<endl ;



}