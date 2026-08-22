#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string x = "x";
    string y = "xyz";
    if (x == y) cout << "Same" << endl;
    else cout << "Not Same" << endl;

    if (x > y) cout << x << " is greater than " << y << endl;
    else cout << y << " is greater than " << x << endl;
}