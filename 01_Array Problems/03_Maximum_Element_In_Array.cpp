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
    cout << mx;

    // Method 2
    cout << endl;
    int max_ = arr[0];
    for (int i = 0; i <= n-1; i++) {
        if (arr[i] > max_) max_ = arr[i];
    }
    cout << max_;
}