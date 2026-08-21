#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> generate(int num_rows) {
    vector<vector<int>> ans;
    for (int i = 1; i <= num_rows; i++) {
        ans.push_back(vector<int>(i,1));
    }
    for (int i = 2; i < ans.size(); i++) {
        for (int j = 1; j < ans[i].size()-1; j++) {
            ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
        }
    }
    return ans;
}

void print(vector<vector<int>>& result) {
    for (int i = 0; i < result.size(); i++) {
        for (int ele : result[i]) cout << ele << " ";
        cout << endl;
    }
}

int main() {
    // Leetcode 118
    int num_rows = 5;

    vector<vector<int>> result = generate(num_rows);
    print(result);
}