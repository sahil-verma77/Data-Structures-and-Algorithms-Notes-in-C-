#include <iostream>
#include <vector>
using namespace std;
int searchInsert(vector<int>& arr, int target) {
    int n = arr.size();
    if (target < arr[0]) return 0;
    if (target > arr[n-1]) return n;
    int lo = 0, hi = n-1;
    while (lo <= hi) {
        int mid = (lo+hi)/2;
        if (target < arr[mid]) hi = mid-1;
        else if (target > arr[mid]) lo = mid+1;
        else return mid; 
    }
    return lo;
}
void print(vector<int>& arr) {
    for (int ele : arr) cout << ele << " ";
    cout << endl;
}
int main() {
    // Leetcode 35
    vector<int> arr = {1,3,5,6};
    int target = 2;

    print(arr);
    cout << searchInsert(arr, target);
}