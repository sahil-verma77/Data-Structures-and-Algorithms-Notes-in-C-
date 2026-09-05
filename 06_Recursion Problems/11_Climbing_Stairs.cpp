#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int climbStairs(int n) { // TLE
    if (n <= 2) return n;
    return climbStairs(n-1) + climbStairs(n-2);
}
int main() {
    // Leetcode 70
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << climbStairs(n) << endl;
}