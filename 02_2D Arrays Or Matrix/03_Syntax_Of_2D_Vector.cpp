#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> v = {{5,8,1,2},{9,9,4,4},{7,0,3,5}};
    int m = v.size(), n = v[0].size();
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    // Transpose
    cout << endl;
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 3; i++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}