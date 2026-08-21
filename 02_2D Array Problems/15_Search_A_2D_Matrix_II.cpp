#include <iostream>
#include <vector>
#include <vector>
using namespace std;
bool search_matrix(vector<vector<int>>& arr, int target) {
    int m = arr.size(), n = arr[0].size();
    int i = 0, j = n-1;
    while (i < m && j >= 0) { // TC = O(m+n)
        if (arr[i][j] > target) j--;
        else if (arr[i][j] < target) i++;
        else return true;
    }
    return false;
}
bool search_matrix_2(vector<vector<int>>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) { // TC = O(mn)
        for (int j = 0; j < arr[i].size(); j++) {
            if (arr[i][j] == target) return true;
        }
    }
    return false;
}
int main() {
    vector<vector<int>> arr = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target = 14;

    // Method 1 (Staircase Search Method)
    cout << search_matrix(arr, target) << endl;
 
    // Method 2
    cout << search_matrix_2(arr, target) << endl;
}