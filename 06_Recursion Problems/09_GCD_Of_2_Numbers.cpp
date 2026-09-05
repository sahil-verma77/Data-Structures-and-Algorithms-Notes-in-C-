#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int hcf(int a, int b) {
    for(int i = min(a, b); i >= 1; i--) { // TC = O(min(a, b))
        if (a%i == 0 && b%i == 0) return i;
    }
    return 1;
}
int gcd(int a, int b) { // TC = O(log(min(a, b)))
    // Euclidean Algorithm
    if (a == 0) return b;
    return gcd(b%a, a);
}
int main() {
    int a, b;
    cin >> a >> b;

    cout << hcf(a, b) << endl;
    cout << gcd(a, b) << endl;
}