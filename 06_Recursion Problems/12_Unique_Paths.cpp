#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void paths(int m, int n, string s) {
    // Print all paths
    if (m == 1 && n == 1) {
        cout << s << endl; // correct path
    }
    if (m == 0 || n == 0) return;
    paths(m, n-1, s+"R"); // right
    paths(m-1, n, s+"D"); // right
}
int uniquePaths(int m, int n) { // TLE
    if (m == 1 or n == 1) return 1;
    return uniquePaths(m, n-1) + uniquePaths(m-1, n);
}
int main() {
    int m, n;
    cout << "Enter rows & cols: ";
    cin >> m >> n;

    cout << uniquePaths(m, n) << endl;
    paths(m, n, "");
}