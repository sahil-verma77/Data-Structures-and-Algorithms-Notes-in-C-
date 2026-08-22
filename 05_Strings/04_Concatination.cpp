#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1 = "111";
    string s2 = "222";
    cout << s1 + s2 <<  endl;
    // Or
    string s3 = s1 + s2;
    cout << s3 << endl;

    string s = "abc";
    // string x = s + 4; // Error
    string x = s + '4';
    string x2 = '4' + s;
    cout << x <<  endl;
    cout << x2 <<  endl;

    string s4 = "Sahil";
    s4 += "Verma"; // s4 = "Sahil" + "Verma";
    cout << s4 << endl;
}