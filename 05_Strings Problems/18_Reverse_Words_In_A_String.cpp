#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void reverse_(string& s, int i, int j) {
    while (i < j) {
        int temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++, j--;
    }
}
string reverseWords(string s) {
    string ans = "";
    int n = s.length();
    int i = 0, j = 0;

    while (j < n) {
        if (s[j] != ' ') j++;
        else {
            if (j > i) {
                reverse_(s, i, j-1);
                for (int a = i; a <= j-1; a++) {
                    ans.push_back(s[a]);
                }
                ans.push_back(' ');
            }
            
            while (j < n && s[j] == ' ') {
                j++;
            }
            i = j;
        }
    }
    if (j > i) {
        reverse_(s, i, j-1);
        for (int a = i; a <= j-1; a++) {
            ans.push_back(s[a]);
        }
    }

    if (!ans.empty() && ans.back() == ' ') ans.pop_back();
    
    reverse_(ans, 0, ans.length()-1);
    return ans;
}

int main() {
    // Leetcode 151
    string s = "   the  sky is   blue  ";

    string result = reverseWords(s);
    cout << result;
}