#include<iostream>
using namespace std ;
void update(int n){ // in pass by value  , value remains same update takes place in another memory
    n++;
}
void update2(int & n){ // in pass by refernece value is updated in  same memory
    cout<<n++;
}
int main(){

    int i = 0 ;
    int & j = i ; // reference variable of i is created

    cout<<"value of i is :"<<i<<endl;
    cout<<"value of j is :"<<j<<endl;

    i++;
    // incrementing i
    cout<<"value of i is :"<<i<<endl;
    cout<<"value of j is :"<<j<<endl;
    j++;
    //incremented j
    cout<<"value of i is :"<<i<<endl;
    cout<<"value of j is :"<<j<<endl;
    int x = 10 ;
    cout<<"Before : "<<x<<endl;
    update(x);
    cout<<"After : "<<x<<endl;

    cout<<"Before : "<<x<<endl;
    update2(x);                 // here value is updated becaus we passed variable by reference
    cout<<"After : "<<x<<endl;



    

}