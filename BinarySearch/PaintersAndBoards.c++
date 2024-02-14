#include <bits/stdc++.h> 
using namespace std ;
bool ispossible(vector<int>& board, int N, int A, int B, long long mid) {
    long long time = 0;
    int paintercount = 1;
    for (int i = 0; i < N; i++) {
        if (time + board[i] * B <= mid) {
            time += board[i] * B;
        } else {
            if (board[i] * B > mid) {
                return false;
            }
            paintercount++;
            if (paintercount > A) {
                return false;
            } else {
                time = board[i] * B;
            }
        }
    }
    return true;
}


long long minTime(vector<int>& board, int N, int A, int B) 
{
	long long s = 0 ;
	long long sum = 0 ;
	for(int i = 0 ; i < N ; i++){
		sum += board[i]*B ;
	}    
long long e = LLONG_MAX;
    e = sum ;
	long long mid  = s + (e-s)/2 ;
	long long ans = -1 ;
	while(s<=e){

		if(ispossible(board,N,A,B,mid)){
			ans = mid ;
			e = mid - 1 ;
		}
		else{
			s = mid + 1 ;
		}
		mid  = s + (e-s)/2 ;

	}
	return ans ;
}
