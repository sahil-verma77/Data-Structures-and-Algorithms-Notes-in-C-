#include <iostream>
#include <vector>
using namespace std;
void print(vector<int>& arr) {
    for (int ele : arr) cout << ele << " ";
    cout << endl;
}

int main() {
    // vector<int> arr = {7,4,9,1,3,6,2,5};
    vector<int> arr = {5,4,3,6,2,1};
    int n = arr.size();
    print(arr); 
    // Selection Sort
    // ***** Total number of swaps in Selection Sort = n-1 *****
    for (int i = 0; i < n-1; i++) { // AS = O(1), TC = O(n^2) for all 3 cases
        int mn = arr[i], mnIdx = i;
        for (int j = i; j < n; j++) {
            if (arr[j] < mn) {
                mn = arr[j];
                mnIdx = j;
            }
        }
        swap(arr[i],arr[mnIdx]);
    }
    print(arr);
}