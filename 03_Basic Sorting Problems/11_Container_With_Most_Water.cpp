#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int maxArea(vector<int>& arr) {
    int n = arr.size();
    int max_water = 0;
    int i = 0, j = n-1;
    while (i < j) {
        int width = j - i;
        int current_height = min(arr[i],arr[j]);
        int current_water = width * current_height;
        max_water = max(current_water, max_water);

        if (arr[i] < arr[j]) i++;
        else j--;
    }
    return max_water;
}
void print(vector<int>& arr) {
    for (int ele : arr) cout << ele << " ";
    cout << endl;
}

int main() {
    // Leetcode 11
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    
    print(height);
    cout << maxArea(height);
}