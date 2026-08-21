#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> transpose(vector<vector<int>>& arr, int m, int n) {
    vector<vector<int>> ans(n,vector<int>(m));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                ans[j][i] = arr[i][j];
            }
        }
        return ans;
}

void print(vector<vector<int>>& res, int n) {
    for (int i = 0; i < n; i++) {
        for (int ele : res[i]) cout << ele << " ";
        cout << endl;
    }
}

int main() {
    // Transpose of matrix (m*n)
    vector<vector<int>> arr = {{1,2,3,4},{5,6,7,8}};
    int m = arr.size(), n = arr[0].size();

    vector<vector<int>> res = transpose(arr, m , n);
    print(res, n);
}