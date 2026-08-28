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
string reverseWords(string &s) {
    string ans = "";
    int n = s.length();
    int i = 0, j = 0;
    while (j < n) {
        if (s[j] != ' ') j++;
        else {
            if (j > i) {
                reverse_(s, i ,j-1);

                if (!ans.empty()) ans.push_back(' ');

                for (int a = i; a <= j-1; a++) {
                    ans.push_back(s[a]);
                }
            }
            while (j < n && s[j] == ' ') j++;
            i = j;
        }
    }

    if (j > i) {
        reverse_(s, i, j-1);

        if (!ans.empty()) ans.push_back(' ');

        for (int a = i; a <= j-1; a++) {
            ans.push_back(s[a]);
        }
    }
    return ans;
}

int main() {
    // GfG (Reverse each word in a given string)
    string s = " i like this   program very  much ";

    string result = reverseWords(s);
    cout << result;
}