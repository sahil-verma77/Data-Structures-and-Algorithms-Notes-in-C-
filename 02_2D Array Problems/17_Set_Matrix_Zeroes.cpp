#include <iostream>
#include <vector>
using namespace std;
void method_1(vector<vector<int>>& arr, int m, int n) { // AS = O(1), TC = O(m+n)
    bool first_row_zero = false;
    bool first_col_zero = false;
    // 1. Check if the first row has any zeros
    for (int j = 0; j < n; j++) {
        if (arr[0][j] == 0) {
            first_row_zero = true;
            break;
        }
    }
    // 2. Check if the first col has any zeros
    for (int i = 0; i < m; i++) {
        if (arr[i][0] == 0) {
            first_col_zero = true;
            break;
        }
    }
    // 3. Use the rest of the first row and column as tracking markers
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (arr[i][j] == 0) {
                arr[i][0] = 0; // Mark this row
                arr[0][j] = 0; // Mark this col
            }
        }
    }
    // 4. Update the inner matrix cells using the markers
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (arr[i][0] == 0 || arr[0][j] == 0) {
                arr[i][j] = 0;
            }
        }
    }
    // 5. Finally, update the first row if needed
    if (first_row_zero) {
        for (int j = 0; j < n; j++) {
            arr[0][j] = 0;
        }
    }
    // 6. Finally, update the first column if needed
    if (first_col_zero) {
        for (int i = 0; i < m; i++) {
            arr[i][0] = 0;
        }
    }
}

void method_2(vector<vector<int>>& arr, int m, int n) {
    vector<bool> row(m,false);
    vector<bool> col(n,false);
    for (int i = 0; i < m; i++) { // AS = O(m+n), TC = O(mn)
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == 0) {
                row[i] = true;
                col[j] = true;
            }
        }
    }
    for (int i = 0; i < m; i++) {
        if (row[i] == true) { // set ith row of arr to 0
            for (int j = 0; j < n; j++) {
                arr[i][j] = 0;
            }
        }
    }
    for (int j = 0; j < n; j++) {
        if (col[j] == true) { // set jth col of arr to 0
            for (int i = 0; i < m; i++) {
                arr[i][j] = 0;
            }
        }
    }
}

void method_3(vector<vector<int>>& arr, int m, int n) {
    vector<vector<int>> copy = arr;
    for (int i = 0; i < m; i++) { // AS = O(mn), TC = O(mn(m+n))
        for (int j = 0; j < n; j++) {
            if (copy[i][j] == 0) {
                // set ith row to 0
                for (int col = 0; col < n; col++) {
                    arr[i][col] = 0;
                }
                // set jth col to 0
                for (int row = 0; row < m; row++) {
                    arr[row][j] = 0;
                }
            }
        }
    }
}

void print(vector<vector<int>>& arr, int m) {
    for (int i = 0; i < m; i++) {
        for (int ele : arr[i]) cout << ele << " ";
        cout << endl;
    }
    cout << endl;
}

int main() {
    vector<vector<int>> arr = {{1,1,1},{1,0,1},{1,1,1}};
    int m = arr.size(), n = arr[0].size();

    method_1(arr, m, n);
    print(arr, m);
    method_2(arr, m, n);
    print(arr, m);
    method_3(arr, m, n);
    print(arr, m);
}