#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    cout << s << endl;

    int n = s.size();
    int count = 0;
    for (int i = 0; i < n; i++) { // TC = O(n)
        int ch = s[i];
        if (ch >= 65 && ch <= 90) ch += 32;
        if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u') count++;
    }
    cout << count << endl;
}