#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int numRescueBoats(vector<int>& arr, int limit) {
    int n = arr.size();
    int boats = 0;
    sort(arr.begin(), arr.end());
    int i = 0, j = n-1;
    while (i <= j) {
        if (arr[i] + arr[j] <= limit || i == j) {
            boats++;
            i++,j--;
        }
        else {
            boats++;
            j--;
        }
    }
    return boats;
}
void print(vector<int>& arr) {
    for (int ele : arr) cout << ele << " ";
    cout << endl;
}
int main() {
    // Leetcode 881
    vector<int> people = {3,2,2,1};
    int limit = 3;

    print(people);
    cout << numRescueBoats(people, limit);
}