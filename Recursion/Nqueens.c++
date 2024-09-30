#include<iostream>
#include<vector>
using namespace std ;
void PrintAnswer(vector<vector<char>>& Box,int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<Box[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
bool isSafe(vector<vector<char>>& Box,int row , int col,int n){

    int i = row ;
    int j = col ;
    //row check
    while(j >= 0){
        if(Box[i][j] == 'Q'){
            return false;
        }
        j-- ;
    }
    i = row ;
    j = col ;
    //left upper check
    while(i >=0 && j >= 0){
        if(Box[i][j] == 'Q'){
            return false;
        }
        i--;
        j--;
    }
    //left lower check 
    i = row ;
    j = col ;
    while(i < n && j >= 0){
        if(Box[i][j] == 'Q'){
            return 0 ;
        }
        i++;
        j--;
    }
    return true ;
}

void PlaceQueens( vector<vector<char>>& Box,int i , int j , int n){

    //base case 
    if(j >= n){
        PrintAnswer(Box,n);
        return ;
    }
    for(int i = 0 ; i < n ; i++){

        if(isSafe(Box,i,j,n)){

            Box[i][j] = 'Q';

            PlaceQueens(Box,i,j+1,n);

            Box[i][j] = '-';
        }
    }
}

int main(){
    int n = 4 ;
    vector<vector<char>> Box(n,vector<char>(n,'-'));
    PlaceQueens(Box,0,0,n);
    return 0 ;
    
}