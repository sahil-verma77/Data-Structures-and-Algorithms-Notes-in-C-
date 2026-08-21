#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int mySqrt_1(int n) {
    if (n == 0) return 0;
    int lo = 1, hi = n;
    while (lo <= hi) { // TC = O(logn)
        int mid = lo + (hi-lo)/2;
        if (mid > n/mid) hi = mid-1;
        else if (mid < n/mid) lo = mid+1;
        else return mid;
    }
    return hi;
}
int mySqrt_2(int n) {
    for (int i = 1; i <= n; i++) { // TC = O(sqrt(n))
        if (i == n/i) return i;
        if (i > n/i) return i-1;
    }
    return 0;
}
int main() {
    // Leetcode 69
    int n = 45;
    cout << mySqrt_1(n) << endl;
    cout << mySqrt_2(n) << endl;
}