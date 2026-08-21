#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void reverse(vector<int>& nums, int i, int j) {
    while (i < j) {
        swap(nums[i], nums[j]);
        i++;
        j--;
    }
}

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;
    reverse (nums, 0, n-1);
    reverse (nums, 0, k-1);
    reverse (nums, k, n-1);
}

void print (vector<int>& nums) {
    for (int ele : nums) cout << ele << " ";
    cout << endl;
}

int main() {
    // Leetcode 189
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    
    print (nums);
    rotate (nums, k);
    print (nums);
}