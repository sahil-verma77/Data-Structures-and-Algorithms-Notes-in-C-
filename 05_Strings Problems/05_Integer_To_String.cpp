#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Integer to String :-
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Method 1
    string s = to_string(n); // O(length)
    cout << s << endl;

    // Method 2
    // if (n == 0) {
    //     cout << 0;
    // }
    // bool isNegative = false;
    // if (n < 0) {
    //     isNegative = true;
    //     n = abs(n);
    // }
    // string s = "";
    // while(n != 0) {
    //     int lastDigit = n%10;
    //     char ch = lastDigit + 48;
    //     s.push_back(ch);
    //     n /= 10;
    // }
    // // Reverse
    // int i = 0, j = s.length()-1;
    // while (i < j) {
    //     swap(s[i],s[j]);
    //     i++, j--;
    // }
    // if (isNegative) s = "-" + s;

    // cout << s << endl;
}