#include<iostream>
using namespace std ;

// Basics of Pointers

int main(){
    int num = 10 ;
    cout<<"Number is : "<<num<<endl ;

    // address of operator --> & ;
    cout<<"Address of number is : "<<&num<<endl;

    // pointer stores address 

    int *ptr = &num;     // addrdess of number is stored in ptr 
    // ptr is a pointer to int datatype
    cout<<"Address of number is : " <<ptr<<endl; // adddress of num will be printed 

    // to print number using ptr
    cout<<"Number is : "<<*ptr<<endl ; //*ptr gives the value stroed at adddress strod=red in ptr 

    // lets  check out size of pointer 
    cout<<"Size of pointer ptr is : "<<sizeof(ptr)<<endl ;

    // pointer to char 
    char ch = 'A';
    char * chr = &ch ;
    cout<<"size of pointer chr is : "<<sizeof(chr)<<endl;
    // conclusion --> size of pointer is 8 for any datatype 

    //pointer arithmetics
    *ptr = *ptr + 1; // value at address stored in ptr + 1 

    cout<<"Updated value of number is : "<<*ptr<<endl;
    cout<<"Updated address is : "<<ptr<<endl;  // conclusion --> address is same 

    cout<<"address of ptr earlier : "<<ptr<<endl; 
    ptr++ ;
    cout<<"address of updated ptr is : "<<ptr<<endl; // address is incremented by 4 because datatype is 4
     




}