#include <bits/stdc++.h> 

class node{
public:
    int data;  // The value of the element
    int i;     // The index of the array this element comes from
    int j;     // The index of the element in that array

    node(int data, int row, int col){
        this->data = data;
        i = row;
        j = col;
    }
};

class compare{
public:
    // Comparator to make this a min-heap based on the data field of node
    bool operator()(node *a, node *b){
        return a->data > b->data;
    }
};

vector<int> mergeKSortedArrays(vector<vector<int>>& kArrays, int k) {
    priority_queue<node*, vector<node*>, compare> minHeap;  // Min-heap to store nodes

    // Step 1: Insert the first element of each array into the heap
    for(int i = 0; i < k; i++){
        node *temp = new node(kArrays[i][0], i, 0);  // Create node for the first element
        minHeap.push(temp);  // Insert into the heap
    }

    vector<int> ans;  // Result array to store the merged elements

    // Step 2: Process the heap
    while(minHeap.size() > 0){
        node* temp = minHeap.top();  // Get the smallest element
        ans.push_back(temp->data);   // Add it to the result
        minHeap.pop();  // Remove the smallest element from the heap

        int i = temp->i;  // Get the array index of the element we just processed
        int j = temp->j;  // Get the element index of the element we just processed

        // Insert the next element from the same array if it exists
        if(j+1 < kArrays[i].size()){
            node* next = new node(kArrays[i][j+1], i, j+1);  // Create node for the next element
            minHeap.push(next);  // Insert it into the heap
        }
    }

    return ans;  // Return the merged result
}
