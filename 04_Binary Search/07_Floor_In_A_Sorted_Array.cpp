#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findFloor1(vector<int>& arr, int target) {
    int ub_index = upper_bound(arr.begin(), arr.end(), target) - arr.begin();
    // If upper_bound points to index 0, no element is <= x
    if (ub_index == 0) {
        return -1;
    }
    // The element just before upper_bound is always the floor
    return ub_index - 1;
}
int findFloor2(vector<int>& arr, int target) {
    int n = arr.size();
    int lb_index = lower_bound(arr.begin(), arr.end(), target) - arr.begin();
    // Case 1: Exact match found
    if (lb_index < arr.size() && arr[lb_index] == target) {
        return lb_index;
    }
    // Case 2: All elements are larger than x, so no floor exists
    else if (lb_index == 0) {
        return -1;
    }
    // Case 3: The element at lb_index is greater than x, so the largest smaller element is right before it
    else return lb_index-1;
}
int findFloor3(vector<int>& arr, int target) {
    int n = arr.size();
    int floor_idx = -1;
    int lo = 0, hi = n-1;
    while (lo <= hi) {
        int mid = lo + (hi - lo)/2;
        if (arr[mid] <= target) {
            floor_idx = mid;
            lo = mid+1;
        }
        else {// arr[mid] > target
            hi = mid-1;
        }
    }
    return floor_idx;
}
void print(vector<int>& arr) {
    for (int ele : arr) cout << ele << " ";
    cout << endl;
}
int main() {
    // Gng (Floor in a Sorted Array)
    vector<int> arr = {1,2,8,10,10,12,19};
    int target = 5;
    
    print(arr);
    // cout << findFloor1(arr, target) << endl;
    // cout << findFloor2(arr, target) << endl;
    cout << findFloor3(arr, target) << endl;
}