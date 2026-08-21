#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Mutliplication of two Square Matrices
    vector<vector<int>> a = {{7,8},{2,9}};
    vector<vector<int>> b = {{14,5},{5,18}};
    int n = a.size();
    vector<vector<int>> res(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++) { // TC = O(n^3)
        for (int j = 0; j < n; j++) {
            // res[i][j] = summation(k-> 0 to n-1) a[i][k] * b[k][j];
            for (int k = 0; k < n; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int ele : res[i]) cout << ele << " ";
        cout << endl;
    }
}