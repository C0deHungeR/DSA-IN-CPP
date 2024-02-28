#include<iostream>
using namespace std;

int main() {
    // 2d array declaration dynamically
    int row;
    cin >> row; // number of rows
    int column;
    cin >> column;

    // creation of 2d array dynamically
    int **arr = new int*[row];
    for(int i = 0; i < row; i++) {
        arr[i] = new int[column];
    }

    // taking input of array elements
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            cin >> arr[i][j]; // Corrected array indexing
        }
    }

    // printing 2d array
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            cout << arr[i][j] << " "; // Corrected array indexing
        }
        cout << endl;
    }

    // Freeing dynamically allocated memory
    for(int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
