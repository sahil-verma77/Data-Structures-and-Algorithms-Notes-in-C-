#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> union_(vector<int>& a, vector<int>& b) {
    int m = a.size(), n = b.size();
    int i = 0, j = 0;
    vector<int> ans;

    int last_added = INT_MIN;
    while (i < m && j < n) { // TC = O(m+n)
        if (a[i] < b[j]) {
            if (a[i] != last_added) {
                ans.push_back(a[i]);
                last_added = a[i];
            }
            i++;
        }
        else if (b[j] < a[i]) {
            if (b[j] != last_added) {
                ans.push_back(b[j]);
                last_added = b[j];
            }
            j++;
        }
        else { // a[i] == b[j]
            if (a[i] != last_added) {
                ans.push_back(a[i]);
                last_added = a[i];
            }
            i++,j++;
        }
    }

    while (i < m) {
        if (a[i] != last_added) {
            ans.push_back(a[i]);
            last_added = a[i];
        }
        i++;
    }
    while (j < n) {
        if (b[j] != last_added) {
            ans.push_back(b[j]);
            last_added = b[j];
        }
        j++;
    }
    return ans;
}
void print(vector<int>& arr) {
    for (int ele : arr) cout << ele << " ";
    cout << endl;
}
int main() {
    vector<int> a = {1,2,2,3,5,8};
    vector<int> b = {3,3,3,8,9};
    
    print(a); print(b);
    vector<int> result = union_(a, b);
    cout << endl;
    print(result);
}