#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int fib(int n) { // TC = O(2^n) ; AS = O(n)
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n-1) + fib(n-2);
}
int main() {
    // Leetcode 509
    // Fibonacci Series :- 0, 1, 1, 2, 3, 5, 8, 13, ...
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << fib(n) << endl;
}