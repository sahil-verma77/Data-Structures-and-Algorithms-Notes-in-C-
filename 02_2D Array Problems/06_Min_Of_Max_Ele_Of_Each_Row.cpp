#include <iostream>
#include <climits>
using namespace std;

int main() {
    // Find the minimum element out of all the maximum elements of each row.
    int arr[][4] = {{9,4,8,4},{6,1,1,51},{2,2,3,6}};
    int min_ele = INT_MAX;
    for (int i = 0; i < 3; i++) {
        int max_ele = INT_MIN;
        for (int j = 0; j < 4; j++) {
            max_ele = max(max_ele,arr[i][j]);
        }
        if (max_ele < min_ele) {
            min_ele = max_ele;
        }
    }
    cout << min_ele;
}