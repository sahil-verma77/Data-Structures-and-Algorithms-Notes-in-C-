#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int power(int a, int b) { // TC = O(b)
    if (b == 0) return 1;
    int ans = a * power(a, b-1);
    return ans;
}
int main() {
    int a, b; // a --> Natural no., b --> Whole no.
    cin >> a >> b;
    cout << power(a, b);
}