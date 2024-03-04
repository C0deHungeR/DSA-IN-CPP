#include<iostream>
using namespace std ;

 void merge(int *arr, int s, int e) {
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainarrayIndex = s;

    for (int i = 0; i < len1; i++) {
        first[i] = arr[mainarrayIndex++];
    }
    mainarrayIndex = mid + 1;
    for (int i = 0; i < len2; i++) {
        second[i] = arr[mainarrayIndex++];
    }
    //merge two sorted arrays
    int Index1 = 0;
    int Index2 = 0;
    mainarrayIndex = s;
    while (Index1 < len1 && Index2 < len2) {
        if (first[Index1] < second[Index2]) {
            arr[mainarrayIndex++] = first[Index1++];
        } else {
            arr[mainarrayIndex++] = second[Index2++];
        }
    }
    while (Index1 < len1) {
        arr[mainarrayIndex++] = first[Index1++];
    }
    while (Index2 < len2) {
        arr[mainarrayIndex++] = second[Index2++];
    }

    delete[] first;
    delete[] second;
}

// merge sort
void mergesort(int *arr,int s ,int e){
    //base case 
    if(s >= e){
        return ;
    }
    int mid = (s+e)/2;
    mergesort(arr,0,mid);
    mergesort(arr,mid+1,e);

    //merge
    merge(arr,s,e);

   
}

int main(){
    int arr[6] = {2,1,6,0,9,8} ;
    int n = 6 ;

    mergesort(arr,0,n-1);
    for(int i = 0 ; i < n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}