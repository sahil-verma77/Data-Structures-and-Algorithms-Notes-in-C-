#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t) {
    if (s.length() != t.length()) return false;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return (s == t);
}

int main() {
    // Leetcode 242
    string s = "anagram", t = "nagaram";

    if (isAnagram(s, t)) cout << "true";
    else cout << "false";
}