#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {4,2,6,8,1,9,2};
    int n = sizeof(arr)/4;

    // Method 1
    int mx = INT_MIN;
    for (int i = 0; i <= n-1; i++) {
        // if (arr[i] > mx) mx = arr[i];
        mx = max(mx, arr[i]);
    }
    int smx = INT_MIN;
    for (int i = 0; i <= n-1; i++) {
        // if (arr[i] == mx) continue;
        // if (arr[i] > smx) smx = arr[i];
        if (arr[i] > smx && arr[i] != mx) smx = arr[i];
    }
    cout << mx << " " << smx;
}