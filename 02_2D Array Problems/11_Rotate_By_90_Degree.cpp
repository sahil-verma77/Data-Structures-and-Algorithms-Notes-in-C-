#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void reverse_row(vector<vector<int>>& arr, int n) {
    for (int i = 0; i < n; i++) {
        int s = 0, e = n-1;
        while (s < e) {
            int temp = arr[i][s];
            arr[i][s] = arr[i][e];
            arr[i][e] = temp;
            s++,e--;
        }
    }
}

void reverse_col(vector<vector<int>>& arr, int n) {
    int s = 0, e = n-1;
    while (s < e) {
        swap(arr[s],arr[e]);
        s++,e--;
    }
}
void transpose(vector<vector<int>>& arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            swap(arr[i][j],arr[j][i]);
        }
    }
}

void print(vector<vector<int>>& arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    // Rotate by 90 degree (anticlockwise)
    vector<vector<int>> arr = {{0,1,2},{3,4,5},{6,7,8}};
    int n = arr.size();
    print(arr, n);
    // Method 1 (Reverse Rows First, Then Transpose)
    reverse_row(arr, n);
    transpose(arr, n);
    print(arr, n);
    
    // // Method 2 (Transpose First, Then Reverse Columns)
    // transpose(arr, n);
    // reverse_col(arr, n);
    // print(arr, n);

    // // Method 3 (My Method)
    // transpose(arr, n);
    // reverse_row(arr, n);
    // transpose(arr, n);
    // reverse_row(arr, n);
    // transpose(arr, n);
    // reverse_row(arr, n);

    // print(arr, n);
}