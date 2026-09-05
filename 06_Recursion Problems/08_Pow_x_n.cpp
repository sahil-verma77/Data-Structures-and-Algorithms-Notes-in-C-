#include <iostream>
#include <bits/stdc++.h>
using namespace std;
double power(double x, long long n) {
    if (n == 0) return 1;
    double halfAns = power(x, n/2);
    double ans = halfAns * halfAns;
    return (n%2 == 0) ? ans : ans * x;
}
double myPow2(double x, int n) {
    bool flag = (n >= 0); // flag is true then b is positive
    long long n2 = n;
    double ans = power(x, abs(n2));
    if (flag == false) ans = 1/ans;
    return ans;
}
double myPow1(double x, long long n) { // My Method
    if (n == 0) return 1;
    bool flag = false;
    if (n < 0) {
        n = abs(n);
        flag = true;
    }
    double halfAns = myPow1(x, n/2);
    double ans = halfAns * halfAns;
    if (n%2 != 0) ans *= x;
    if (flag) return 1/ans;
    return ans;
}
int main() {
    // Leetcode 50
    double x;
    int n;
    cout << "Enter the base: ";
    cin >> x;
    cout << "Enter the exponent: ";
    cin >> n;
    
    cout << myPow1(x, n) << endl;
    cout << myPow2(x, n) << endl;
}