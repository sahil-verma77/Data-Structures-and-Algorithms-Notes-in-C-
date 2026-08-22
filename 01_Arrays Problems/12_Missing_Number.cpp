#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int method1(vector<int>& nums) { // TC = O(n^2)
    int n = nums.size();
    for (int i = 0; i <= n; i++) {
        bool flag = false;
        for (int ele : nums) {
            if (ele == i) {
                flag = true;
                break;
            }
        }
        if (flag == false) return i;
    }
    return 0;
}

int method2(vector<int>& nums) { // TC = O(nlogn)
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++) {
        if (i != nums[i]) return i;
    }
    return n;
}

int method3(vector<int>& nums) { // TC = O(n)
    int n = nums.size();
    int array_sum = 0;
    for (int i = 0; i < n; i++) {
        array_sum += nums[i];
    }
    int zero_to_n_sum = n*(n+1)/2;
    return zero_to_n_sum - array_sum;
}

int method4(vector<int>& nums) { // TC = O(n), AS = O(n)
    int n = nums.size();
    vector<bool> flag(n+1, false);
    for (int i = 0; i < n; i++) {
        flag[nums[i]] = true;
    }
    for (int i = 0; i <= n; i++) {
        if (flag[i] == false) return i;
    }
    return 0;
}

int main() {
    // Leetcode 268
    vector<int> nums = {2,0,1,7,6,5,3};

    int result_1 = method1(nums);
    cout << result_1 << endl;
    
    int result_2 = method2(nums);
    cout << result_2 << endl;
    
    int result_3 = method3(nums);
    cout << result_3 << endl;

    int result_4 = method4(nums);
    cout << result_4 << endl;
}