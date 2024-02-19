#include<iostream>
#include<vector>
using namespace std ;
void merge(int arr1[],int m , int arr2[],int n , int arr3[],int o){
    int i = 0 ,j = 0 ;
    int k = 0 ;
    while (i < m && j < n) {

        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i] ;
            k++;
            i++;
        }
        else{
            arr3[k] = arr2[j] ;
            k++;
            j++;
        }

    }
    while(i < m){
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while(j < n){
        arr3[k] =arr2[j];
        k++;
        j++;
    }

    for(int i = 0 ; i < o ; i++){
        cout<<arr3[i]<<" ";
    }
}

int main(){
    int arr1[12]={1,3,4,6,7,8,9,87,89,90,98,933};
    int arr2[4] ={2,5,10,91} ;
    int arr3[16] = {0} ;
    merge(arr1,12,arr2,4,arr3,16);
    return 0 ;
}