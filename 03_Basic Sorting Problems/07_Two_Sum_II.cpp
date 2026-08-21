#include <iostream>
#include <vector>
using namespace std;
vector<int> two_sum(vector<int>& arr, int target) {
    vector<int> ans(2);
    int n = arr.size();
    int i = 0, j = n-1;
    while (i < j) {
        if (arr[i] + arr[j] > target) j--;
        else if (arr[i] + arr[j] < target) i++;
        else {
            ans[0] = i+1;
            ans[1] = j+1;
            break;
        }
    }
    return ans;
}
void print(vector<int>& arr) {
    for (int ele : arr) cout << ele << " ";
    cout << endl;
}

int main() {
    // Leetcode 167
    vector<int> arr = {2,7,11,15};
    int target = 9;

    print(arr);
    vector<int> result = two_sum(arr, target);
    print(result);
}