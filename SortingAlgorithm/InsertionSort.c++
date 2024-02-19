#include <iostream>
using namespace std ;
#include<vector>
void insertionSort(int n, vector<int> &arr){
    
    for(int i = 1 ; i < n ; i++){

        int temp = arr[i];
        int j = i-1 ;
        for( ; j >=0 ; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j] ;
            }
            else{
                
                break ;
            }

        }
        arr[j+1] = temp ;
        
    }
}
int main(){
    vector <int> arr ={1,3,4,0,88,23,43,56,0,18} ;
    insertionSort(10,arr); 
    for(int i = 0 ; i < 10 ; i ++){
        cout<<arr[i]<<" ";
    }
    
}