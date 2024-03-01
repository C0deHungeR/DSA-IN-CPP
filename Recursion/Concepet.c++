#include<iostream>
using namespace std ;

//for basic understanding
void ReachDestination(int start,int desti){

    cout<<"start is : "<<start<< " Destination is : "<<desti<<endl;
    //base case
    if(start == desti){
        return ;
    }
    start++; // updating start
    ReachDestination(start,desti); // recursive call
}
int main(){
    int s = 1 ;
    int end = 10 ;
    ReachDestination(s,end);
    return 0 ;

}