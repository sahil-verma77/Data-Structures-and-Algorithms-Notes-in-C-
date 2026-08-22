#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void print(string s) {
    for (char ch : s) cout << ch;
    cout << endl;
}
int main() {
    string s = "Sahil Verma";

    print(s);
    int n = s.size();
    int i = 0, j = (n/2)-1;
    while (i < j) {
        int temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++, j--;
    }
    print(s);
}