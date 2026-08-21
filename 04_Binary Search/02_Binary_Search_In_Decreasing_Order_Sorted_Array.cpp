#include <iostream>
#include <vector>
using namespace std;
int search(vector<int>& arr, int target) {
    int n = arr.size();
    int lo = 0, hi = n-1; // 179,124,120,99,87,79,44,22,19,-4
    while (lo <= hi) {
        int mid = (lo+hi)/2;
        if (arr[mid] > target) lo = mid+1;
        else if (arr[mid] < target) hi = mid-1;
        else return mid;
    }
    return -1;
}
void print(vector<int>& arr) {
    for (int ele : arr) cout << ele << " ";
    cout << endl;
}
int main() {
    vector<int> arr {179,124,120,99,87,79,44,22,19,-4};
    int target = 44;

    print(arr);
    cout << search(arr, target);
}