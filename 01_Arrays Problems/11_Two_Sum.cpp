#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans(2);
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i+1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                return{i, j};
            }
        }
    }
    return {};
}

void print(vector<int>& result) {
    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]";
}
int main() {
    // Leetcode 1
    vector<int> nums = {2,7,11,15};
    int target = 9;
    
    vector<int> result = twoSum(nums, target);
    print (result);
}