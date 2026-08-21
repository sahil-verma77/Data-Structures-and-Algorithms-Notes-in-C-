#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> intersection_1(vector<int>& a, vector<int>& b) {
    bool seen[1001] = {false};
    vector<int> ans;
    
    for (int ele : a) { // TC = O(m+n)
        seen[ele] = true;
    }

    for (int ele : b) {
        if (seen[ele] == true) {
            ans.push_back(ele);
            seen[ele] = false;
        }
    }
    return ans;
}

vector<int> intersection_2(vector<int>& a, vector<int>& b) {
    int m = a.size(), n = b.size();
    int i = 0, j = 0;
    vector<int> ans;

    int last_added = INT_MIN;
    while (i < m && j < n) { // TC = O(m+n)
        if (a[i] < b[j]) i++;
        else if (a[i] > b[j]) j++;
        else { // a[i] == b[j]
            if (a[i] != last_added) {
                ans.push_back(a[i]);
                last_added = a[i];
            }
            i++,j++;
        }
    }
    return ans;
    
}
vector<int> intersection_3(vector<int>& a, vector<int>& b) { // Didn't know this method
    unordered_set<int> seen;
    vector<int> ans;

    // 2. Insert all numbers from a into the set
    for (int num : a) {
        seen.insert(num); // Automatically handles duplicate values in a
    }

    // 3. Scan b to look for matches
    for (int num : b) {
        // seen.count(num) returns 1 if 'num' exists in the set, and 0 if it doesn't
        if (seen.count(num) > 0) {
            ans.push_back(num); // Found a match!
            
            // CRITICAL STEP FOR DISTINCT INTERSECTION:
            // Erase the number from the set so a duplicate in b can't match it again
            seen.erase(num); 
        }
    }
    return ans;
}
void print(vector<int>& arr) {
    for (int ele : arr) cout << ele << " ";
    cout << endl;
}
int main() {
    vector<int> a = {1,2,2,3,3,5,8};
    vector<int> b = {3,3,3,5,5,8,9};
    
    print(a); print(b);
    vector<int> result = intersection_1(a, b);
    print(result);
    // vector<int> result = intersection_2(a, b);
    // print(result);
    // vector<int> result = intersection_3(a, b);
    // print(result);
}