#include<iostream>
using namespace std ; 
void update(int **ptr2){
    ptr2 =  ptr2 + 1 ; // nothing changes by this 

    *ptr2 = *ptr2 + 1; // change will take place

    **ptr2  = **ptr2 + 1 ; // change will take place


}

int main(){
    int value  = 9 ;
    int *ptr = &value;
    int **ptr2 = &ptr ;

    cout<<"Address of Ptr is : "<<ptr<<endl;
    cout<<"Address of Ptr2 is : "<<ptr2<<endl;
    cout<<"Size is :"<<sizeof(ptr)<<endl;
    cout<<"Size is :"<<sizeof(ptr2)<<endl; 
    cout<<"Value is "<<*ptr<<endl; // value at address stored in ptr will be printed
    cout<<"Value is "<<*ptr2<<endl; // address of ptr is stored in ptr2 which is printed 
    cout<<"value is "<<**ptr2<<endl; // address of ptr is stored in ptr2 and hence **ptr2 will print 9
    cout<<"Before :"<<endl;
    // lets talk about  address value 
    cout<<"Address of value is : "<<&value<<endl; // address of value using &
    cout<<"Address of value is : "<<ptr<<endl; // address of value using pointer ptr
    cout<<"Address of value is : "<<*ptr2<<endl; // adrres of ptr is stored in ptr2 
    // lets talk about integer of value
    cout<<"Value is : "<<value<<endl;
    cout<<"Value is : "<<*ptr<<endl;
    cout<<"Value is : "<<**ptr2<<endl;
    update(ptr2);
    cout<<"AFTER :"<<endl;
    // lets talk about  address value 
    cout<<"Address of value is : "<<&value<<endl; // address of value using &
    cout<<"Address of value is : "<<ptr<<endl; // address of value using pointer ptr
    cout<<"Address of value is : "<<*ptr2<<endl; // adrres of ptr is stored in ptr2 
    // lets talk about integer of value
    cout<<"Value is : "<<value<<endl;
    cout<<"Value is : "<<*ptr<<endl;
    cout<<"Value is : "<<**ptr2<<endl;





}