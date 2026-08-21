#include <iostream>
#include <vector>
using namespace std;
void print(vector<int>& arr) {
    for (int ele : arr) cout << ele << " ";
    cout << endl;
}

int main() {
    vector<int> arr = {5,4,3,6,2,1};
    int n = arr.size();
    print(arr);
    // Bubble Sort
    // ***** Maximum numbers of swaps in Bubble Sort = n(n-1)/2 *****
    // Method 1
    for (int i = 0; i < n-1; i++) { // AS = O(1), TC = O(n^2)
        for (int j = 0; j < n-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    // Method 2 (Optimized)
    for (int i = 0; i < n-1; i++) { // AS = O(1); Best TC = O(n), Avg/Worst TC = O(n^2)
        int swaps = 0;
        for (int j = 0; j < n-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
                swaps++;
            }
        }
        if (swaps == 0) break;
    }
    print(arr);
}