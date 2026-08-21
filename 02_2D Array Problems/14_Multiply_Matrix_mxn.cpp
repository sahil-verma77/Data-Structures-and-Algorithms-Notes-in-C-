#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Multiplication of Two Matrices of Order (m*n) and (p*q)
    vector<vector<int>> a = {{1,2},{3,4},{5,6}};
    vector<vector<int>> b = {{1,2,3,4},{5,6,7,8}};
    int m = a.size(), n = a[0].size();
    int p = b.size(), q = b[0].size();
    vector<vector<int>> res(m,vector<int>(q,0));
    if (n == p) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                for (int k = 0; k < p; k++) {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        for (int i = 0; i < m; i++) {
            for (int ele : res[i]) cout << ele << " ";
            cout << endl;
        }
    }
    else cout << "Multiplication is not possible.";
}