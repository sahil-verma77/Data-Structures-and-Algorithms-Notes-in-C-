#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int intersection_1(vector<int>& a, vector<int>& b) {
    bool seen[1001] = {false};
    int count = 0;
    
    for (int ele : a) { // TC = O(m+n)
        seen[ele] = true;
    }

    for (int ele : b) {
        if (seen[ele] == true) {
            count++;
            seen[ele] = false;
        }
    }
    return count;
}

int intersection_2(vector<int>& a, vector<int>& b) {
    int m = a.size(), n = b.size();
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i = 0, j = 0;
    int count = 0;

    while (i < m && j < n) { // TC = O(mlogm + nlogn)
        if (a[i] < b[j]) i++;
        else if (a[i] > b[j]) j++;
        else { // a[i] == b[j]
            count++;
            i++,j++;
        }
    }
    return count;
}
void print(vector<int>& arr) {
    for (int ele : arr) cout << ele << " ";
    cout << endl;
}
int main() {
    vector<int> a = {89, 24, 75, 11, 23};
    vector<int> b = {89, 2, 24, 4, 11};
    
    print(a); print(b);
    cout << intersection_1(a, b) << endl;
    // cout << intersection_2(a, b) << endl;
}