#include<iostream>
using namespace std ;
int main(){
    int arr[3]={1,2,3}; 

    cout<<"Address OF First element of array is : "<<arr<<endl; // name of array indicates to the first memory block of array 
    cout<<"Address OF First element of array is : "<<&arr[0]<<endl; // using &

    for(int i = 0 ; i < 3 ; i++){
        cout<<"Address of index "<<i<<" is : "<<arr[i]<<endl;
    }

    cout<<"Value at index 0 : "<<*arr<<endl; // this will print value at 0 index
    cout<<"Value at index 0 : "<<*arr + 3<<endl; // 3 will be added to firsr element 
    cout<<"Value is : "<<*(arr + 1)<<endl ; // value at index 1 will be printed 
    cout<<"Value is : "<<*(arr + 2)<<endl ; // value at index 2 will be printed 
    cout<<"Value is : "<<*(arr)+1<<endl; // 1 is added to value at index 0 

    int temp[10];
    cout<<"size of temp is :"<<sizeof(temp)<<endl;
    int *ptr = temp;
    cout<<"size of ptr is : "<<sizeof(ptr)<<endl ;

    cout<<"address is : "<<temp<<endl;
    cout<<"Address is : "<<ptr<<endl;

    // dealing with char arrays 
    char ch[] = "Nachiket";
    cout<<ch<<endl; // entire array(string) will be printed printed  
    char *chr = &ch[0] ;
    cout<<chr<<endl; // here also entire string will be printed
    return 0 ;
}