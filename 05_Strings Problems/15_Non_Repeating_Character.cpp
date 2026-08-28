#include <iostream>
#include <bits/stdc++.h>
using namespace std;
char nonRepeatingChar(string &s) {
    int n = s.length();
    vector<int> freq(26, 0);
    for (char ch : s) {
        freq[ch - 'a']++;
    }
    for (char ch : s) {
        if(freq[ch - 'a'] == 1) return ch;
    }
    return '$';
}

int main() {
    // GfG (Non Repeating Character)
    string s = "geeksforgeeks";

    cout << nonRepeatingChar(s);
}