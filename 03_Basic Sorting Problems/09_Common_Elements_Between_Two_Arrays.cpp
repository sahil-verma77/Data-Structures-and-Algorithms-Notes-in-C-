#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> commonElements_(vector<int> &a, vector<int> &b) {
    int m = a.size(), n = b.size();
    int count1 = 0, count2 = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i] == b[j]) {
                count1++;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (b[i] == a[j]) {
                count2++;
                break;
            }
        }
    }
    return {count1, count2};
}

void print(vector<int>& result) {
    for (int ele : result) cout << ele << " ";
}

int main() {
    // Leetcode 2956
    vector<int> a = {4,3,2,3,1};
    vector<int> b = {2,2,5,2,3,6};

    vector<int> result = commonElements_(a, b);
    print(result);
}