#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool notValid(char ch) {
    if (ch >= 65 && ch <= 90) return false;
    else if (ch >= 97 && ch <= 122) return false;
    else if (ch >= 48 && ch <= 57) return false;
    else return true;
}

bool isPalindrome(string s) {
    int n = s.size();
    int i = 0, j = n-1;
    while (i < j) {
        char x = s[i], y = s[j];
        if (x >= 65 && x <= 90) x += 32;
        if (y >= 65 && y <= 90) y += 32;
        if(notValid(x)) i++;
        else if (notValid(y)) j--;
        else {
            if(x != y) return false;
            i++, j--;
        }
    }
    return true;
}
int main() {
    // Leetcode 125
    string s = "A man, a plan, a canal: Panama";

    // cout << isPalindrome(s) << endl;
    if (isPalindrome(s) == true) cout << "true";
    else cout << "false";
}