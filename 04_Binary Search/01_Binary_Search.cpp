#include <iostream>
#include <vector>
using namespace std;
int search(vector<int>& arr, int target) {
    int n = arr.size();
    int lo = 0, hi = n-1;
    while (lo <= hi) { // O(logn)
        int mid = (lo+hi)/2;
        if (arr[mid] > target) hi = mid-1;
        else if (arr[mid] < target) lo = mid+1;
        else return mid;
    }
    return -1;
    
}
void print(vector<int>& arr) {
    for (int ele : arr) cout << ele << " ";
    cout << endl;
}
int main() {
    // Leetcode 704
    vector<int> arr = {-1,0,3,5,9,12};
    int target = 9;
    
    print(arr);
    cout << search(arr, target);
}