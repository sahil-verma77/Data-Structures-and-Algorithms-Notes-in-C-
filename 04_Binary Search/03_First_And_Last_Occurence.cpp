#include <iostream>
#include <vector>
#include <climits>
using namespace std;
vector<int> occurence(vector<int>& arr, int target) {
    int n = arr.size();
    vector<int> ans(2,-1);
    // First Occurence
    int lo = 0, hi = n-1;
    while (lo <= hi) { // O(logn)
        int mid = (lo+hi)/2;
        if (arr[mid] > target) hi = mid - 1;
        else if (arr[mid] < target) lo = mid + 1;
        else { // arr[mid] == target
            ans[0] = mid;
            hi = mid - 1;
        }
    }
    // Last Occurence
    lo = 0;
    hi = n-1;
    while (lo <= hi) { // O(logn)
        int mid = (lo+hi)/2;
        if (arr[mid] > target) hi = mid - 1;
        else if (arr[mid] < target) lo = mid + 1;
        else { // arr[mid] == target
            ans[1] = mid;
            lo = mid + 1;
        }
    }
    return ans;
}

void print(vector<int>& arr) {
    for (int ele : arr) cout << ele << " ";
    cout << endl;
}

int main() {
    // Leetcode 34
    vector<int> arr {-4,-3,-3,1,1,1,1,1,1,2,4,4,8,9};
    int target = 1;

    print(arr);
    vector<int> result = occurence(arr, target);
    print(result);
}