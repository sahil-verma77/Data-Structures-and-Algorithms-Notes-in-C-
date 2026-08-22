#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Shubham";
    s.pop_back();
    s.push_back('k');
    cout << s <<  endl;
    
    // Sorting
    sort(s.begin(),s.end()); // Lexographically Sort (Check it)
    cout << s <<  endl;
    
    // Reverse
    reverse(s.begin()+1,s.end()-1);
    cout << s <<  endl;
}