#include <iostream>
#include <vector>
using namespace std;
void print (vector<vector<int>>& arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int ele : arr[i]) cout << ele << " ";
        cout << endl;
    }
    cout << endl;
}

int main() {
    // Leetcode 48
    // Rotate by 90 degree (clockwise)
    vector<vector<int>> arr = {{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
    int n = arr.size();
    print (arr, n);
    // Transpose
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
    
    // Reverse each row
    for (int i = 0; i < n; i++) {
        int s = 0, e = n-1;
        while (s < e) {
            int temp = arr[i][s];
            arr[i][s] = arr[i][e];
            arr[i][e] = temp;
            s++;
            e--;
        }
    }
    print (arr, n);
}