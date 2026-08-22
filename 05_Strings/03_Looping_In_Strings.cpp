#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Sumit Gupta";
    int n = s.size();
    // For Loop:-
    for (int i = 0; i < n; i++) {
        cout << s[i];
    }
    // For each Loop:-
    cout << endl;
    for (char ch : s) {
        cout << ch;
    }
}