#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    string s = to_string(abs(n));
    cout << s.length() << endl;

    // Without 'abs':-
    // if (n < 0) cout << s.length()-1;
    // else cout << s.length();
}