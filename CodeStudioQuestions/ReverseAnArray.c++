void reverseArray(vector<int> &arr , int m){

    int e = arr.size()-1;

    int s = m + 1;

   while(s <= e){

       swap(arr[s],arr[e]);

       s++;

       e--;

   }	
}