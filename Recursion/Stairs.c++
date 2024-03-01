#include <bits/stdc++.h> 
/*
Problem statement
You have been given a number of stairs. Initially, you are at the 0th stair, and you need to reach the Nth stair.
Each time, you can climb either one step or two steps.
You are supposed to return the number of distinct ways you can climb from the 0th step to the Nth step.
*/
using namespace std ;
int countDistinctWays(int nStairs) {
    if(nStairs < 0){
        return 0 ;
    }
    if(nStairs == 0){
        return 1 ;
    }
    int ans = countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2);
    return ans ;
}
int main(){
    int n ;
    n = 10 ;
    cout<<countDistinctWays(n);
}