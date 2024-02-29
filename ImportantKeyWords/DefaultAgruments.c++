#include<iostream>
using namespace std ;
/*
 default argument is a value provided in a function declaration that is automatically assigned by the compiler if the calling function doesn’t provide a value for the argument. In case any value is passed, the default value is overridden. 
*/
void print(int arr[],int size , int start = 0 , int end = 6){ 
    // end and start are default arguments here
    for(int i = start ; i < end ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main(){
    int arr[6] = {1,2,3,4,5,6};
    print(arr,6,2,5); // if i donot pass 2 , 5 whole arrray will be printed
    return 0 ;
}
