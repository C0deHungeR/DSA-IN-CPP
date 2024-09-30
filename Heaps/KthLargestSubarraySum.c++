#include<iostream>
#include<queue>
#include<vector>
using namespace std ;
int getKthLargest(vector<int> &arr, int k)
{
	priority_queue<int,vector<int>,greater<int>>mini;
	for(int i = 0 ; i < arr.size() ; i++){
		int sum = 0 ;
		for(int j = i ; j < arr.size() ; j++){
			sum += arr[j];
			if(mini.size() < k){
				mini.push(sum);
			}else{
				if(sum > mini.top()){
					mini.pop();
					mini.push(sum);
				}
			}
		}
	}
	return mini.top();
}
int main(){
    vector<int>arr = {1,5,4,3,27,0};
    cout<<getKthLargest(arr,4);
    return 0 ;
}