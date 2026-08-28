#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Bhavya";
    cout << s.substr(0, 3) << endl; // 0 se start, 3 length ka
    cout << s.substr(2, 3) << endl; // 2 se start, 3 length ka
    cout << s.substr(2) << endl; // 2 to end
    
    cout << endl;

    string st = "Shubham";
    cout << st.substr(0, 5) << endl;
    cout << st.substr(2, 4) << endl;
    cout << st.substr(2) << endl;
}