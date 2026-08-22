#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void method1(vector<int>& nums1, vector<int>& nums2, int m, int n) {
    int i = m-1, j = n-1, k = m+n-1;
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        }
        else {
            nums1[k--] = nums2[j--];
        }
    }
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
    for (int ele : nums1) cout << ele << " ";
}

void method2(vector<int>& nums1, vector<int>& nums2, int m, int n) { // My method
    int temp_n = n;
    while (temp_n != 0) {
        nums1.pop_back();
        temp_n--;
    }
    
    int j = 0;
    while (j < n) {
        nums1.push_back(nums2[j]);
        j++;
    }
    sort(nums1.begin(), nums1.end());
    cout << endl;

    for (int ele : nums1) cout << ele << " ";
}

int main() {
    // Leetcode 88
    vector<int> nums1 = {1,2,3,0,0,0}, nums2 = {2,5,6};
    int m = 3, n = 3;

    method1(nums1, nums2, m, n);
    cout << endl;
    method2(nums1, nums2, m, n);

}