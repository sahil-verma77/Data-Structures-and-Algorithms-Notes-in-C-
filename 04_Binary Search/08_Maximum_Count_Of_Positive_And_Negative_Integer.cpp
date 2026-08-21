#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int maximumCount1(vector<int>& arr) {
    int n = arr.size();
    int neg = 0, pos = 0;
    int lo = 0, hi = n-1;
    // Negative Numbers
    while (lo <= hi) {
        int mid = lo + (hi - lo)/2;
        if (arr[mid] >= 0) hi = mid-1;
        else {
            neg = mid+1;
            lo = mid+1;
        }
    }
    // Positive Numbers
    lo = 0;
    hi = n-1;
    while (lo <= hi) {
        int mid = lo + (hi - lo)/2;
        if (arr[mid] <= 0) lo = mid+1;
        else {
            pos = n-mid;
            hi = mid-1;
        }
    }
    return max(neg, pos);
}
int maximumCount2(vector<int>& arr) {
    int neg = lower_bound(arr.begin(), arr.end(), 0) - arr.begin();
    int pos = arr.end() - upper_bound(arr.begin(), arr.end(), 0);
    return max(neg, pos);
}

void print(vector<int>& arr) {
    for (int ele : arr) cout << ele << " ";
    cout << endl;
}
int main() {
    // Leetcode 2529
    vector<int> arr = {-3,-2,-1,0,0,1,2};
    print (arr);

    cout << maximumCount1(arr);
    // cout << maximumCount2(arr);
}