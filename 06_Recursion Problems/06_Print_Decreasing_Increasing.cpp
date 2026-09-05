#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void decInc(int n) {
    if (n < 1) return;
    cout << n << " ";
    decInc(n-1);

    if (n != 1) cout << n << " ";
}
int main() {
    int n;
    cin >> n;

    decInc(n);
}