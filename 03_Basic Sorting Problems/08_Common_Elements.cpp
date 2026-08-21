#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> commonElements(vector<int> &a, vector<int> &b) {
    vector<int> ans;
    sort(a.begin(),a.end()); // 2 2 3 4 4
    sort(b.begin(),b.end()); // 2 2 3 4 7
    int m = a.size(), n = b.size();
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (a[i] > b[j]) j++;
        else if (a[i] < b[j]) i++;
        else {
            ans.push_back(a[i]);
            i++, j++;
        }
    }
    return ans;
}

void print(vector<int>& result) {
    for (int ele : result) cout << ele << " ";
}

int main() {
    vector<int> a = {3,2,2,4,4};
    vector<int> b = {2,4,3,2,7};

    vector<int> result = commonElements(a, b);
    print(result);
}