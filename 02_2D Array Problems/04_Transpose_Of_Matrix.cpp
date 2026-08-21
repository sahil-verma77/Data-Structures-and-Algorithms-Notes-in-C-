#include <iostream>
#include <vector>
using namespace std;
void print (vector<vector<int>>& arr, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Transpose of Square Matrix
    vector<vector<int>> arr = {{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
    int m = arr.size(), n = arr[0].size();
    print (arr, m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < i; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    cout << endl;
    print (arr, m, n);
}