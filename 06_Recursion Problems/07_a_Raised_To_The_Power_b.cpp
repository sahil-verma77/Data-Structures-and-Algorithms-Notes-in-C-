#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int power(int a, int b) { // TC = O(log b)
    if (b == 0) return 1;
    int halfAns = power(a, b/2);
    int ans = halfAns * halfAns;
    if (b%2 != 0) ans *= a;
    return ans;
}
int main() {
    // (Logarithmic Time Complexity - Binary Exponentiation)
    int a, b;
    cin >> a >> b;

    cout << power(a, b) << endl;
}