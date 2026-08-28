#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Sum of all substrings of a number
    string s = "926";
    int n = s.length();

    // Method 1
    long long totalSum = 0;
    long long currentSum = 0;
    for (int i = 0; i < n; i++) { // TC = O(n)
        int digit = s[i] - '0';
        currentSum = (currentSum * 10) + (digit * (i + 1));
        totalSum += currentSum;
    }
    cout << totalSum << endl;


    // Method 2
    long long count = 0;
    for (int i = 0; i < n; i++) { // TC = O(n^2)
        for (int j = 1; j <= n-i; j++) {
            long long substring = stoll(s.substr(i, j));
            count += substring;
        }
    }
    cout << count << endl;
}