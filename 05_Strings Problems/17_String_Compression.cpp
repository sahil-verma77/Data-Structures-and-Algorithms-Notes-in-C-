#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int compress(vector<char>& s) {
    string ans = "";
    int n = s.size();
    int i = 0, j = 0;
    while(j < n) {
        if (s[j] == s[i]) j++;
        else {
            int len = j - i;
            ans.push_back(s[i]);
            if (len != 1) ans += to_string(len);
            i = j;
        }
    }
    // This is for last group
    int len = j - i;
    ans.push_back(s[i]);
    if (len != 1) ans += to_string(len);

    // vector<char> ans2(ans.length());
    // for (int i = 0; i < ans.length(); i++) {
    //     ans2[i] = ans[i];
    // }
    // s = ans2;
    s.clear();
    for (char ch : ans) {
        s.push_back(ch);
    }
    return s.size();
}

int main() {
    // Leetcode 4439
    vector<char> s = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};

    cout << compress(s);
}