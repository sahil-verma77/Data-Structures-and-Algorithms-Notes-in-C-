#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {4,2,6,8,1,9,2};
    int n = sizeof(arr)/4;

    // Method 1
    int mn = INT_MAX;
    for (int i = 0; i <= n-1; i++) {
        if (arr[i] < mn) mn = arr[i];
    }
    cout << mn;
}