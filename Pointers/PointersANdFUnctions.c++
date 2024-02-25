#include<iostream>
using namespace std ;
void print(int *p){
    cout<<*p<<endl;
}
void update(int *p){
    p = p +1 ;
    //cout<<"inside : "<<p<<endl;
    *p = *p + 1 ;
    cout<<*p<<endl;
}
int main(){
    int value = 5;
    int *p = &value ;
    cout<<"Before : "<<p<<"VAlue is : "<<*p<<endl;
    //print(p);
    update(p);
    cout<<"After : "<<p<<"VAlue is : "<<*p<<endl;
}
