#include<iostream>
using namespace std ;
int main(){
    int matrix[3][3] = {1,2,3,4,5,6,7,8,9};
    int target = 2 ;
    int column = 3;
    int row = 3 ;

        int start = 0 ;
        int end = 8;
        int mid = start + (end - start)/2 ;
        while(start <= end){

            if(matrix[mid/column][mid%column] == target){
               cout<<"index is :"<<mid<<endl;
               break ;
            }
            if(matrix[mid/column][mid%column] > target){
                end = mid -1 ;
            }
            if(matrix[mid/column][mid%column] < target){
                start = mid+1;
            }
            mid = start + (end - start)/2 ;
            
        }
        
        return 0 ;
}