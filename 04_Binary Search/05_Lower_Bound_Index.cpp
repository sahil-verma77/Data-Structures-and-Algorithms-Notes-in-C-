#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int search(vector<int>& arr, int target) {
    int n = arr.size();
    int lb = n;
    int lo = 0, hi = n-1;
    while (lo <= hi) {
        int mid = lo+(hi-lo)/2;
        if (arr[mid] < target) lo = mid+1;
        else { // arr[mid] >= target
            lb = mid;
            hi = mid-1;
        }
    }
    return lb;
}
void print(vector<int>& arr) {
    for (int ele : arr) cout << ele << " ";
    cout << endl;
}
int main() {
    vector<int> arr = {1,3,3,3,9,10};
    int target = 3;
    
    print(arr);
    cout << "Lower Bound Index: " << search(arr, target);
}