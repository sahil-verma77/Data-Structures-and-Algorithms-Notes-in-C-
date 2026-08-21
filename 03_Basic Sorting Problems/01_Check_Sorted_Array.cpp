#include <iostream>
#include <vector>
using namespace std;
bool isSorted(vector<int>& arr) {
    int n = arr.size();
    // Bubble Sort
    for (int i = 0; i <= n-2; i++) {
        if (arr[i] > arr[i+1]) return false;
    }
    return true;
}

int main() {
    // GnG (Check Sorted Array)
    vector<int> arr = {10,20,30,40,50};

    cout << isSorted(arr);
}