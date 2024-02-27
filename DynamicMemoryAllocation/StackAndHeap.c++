#include<iostream>
using namespace std ;
// what is stack memory
/*Stack memory is a special type of memory used by computer programs to store local variables and function call information during the execution of a program. It is a region of memory that operates in a last-in-first-out (LIFO) manner, meaning that the last item placed on the stack is the first one to be removed.*/

// what is heap memory
/*Dynamic memory, also known as heap memory, is a type of memory in computer systems that allows programs to allocate memory at runtime. Unlike stack memory, which is allocated and deallocated automatically as functions are called and return, dynamic memory is managed explicitly by the programmer.*/

int main(){
    int * ptr = new int ; // this is how variable is created dynamically
    *ptr = 10 ;
    cout<<*ptr<<endl;
    cout<<"size is : "<<sizeof(ptr)<<endl;
    int n ;
    cin>>n;
    int *arr = new int[n]; // this is how array of variable size is created dynamically
    cout<<"size is :"<<sizeof(arr)<<endl;
    
    delete []arr ; // deallocated memory of array
    delete ptr ;  // deallocated  memory of ptr

}
