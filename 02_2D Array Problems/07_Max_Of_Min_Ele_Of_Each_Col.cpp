#include <iostream>
#include <climits>
using namespace std;

int main() {
    // Find the maximum element out of all the minimum elements of each column.
    int arr[][4] = {{9,4,8,4},{6,1,1,51},{2,2,3,6}};
    int max_ele = INT_MIN;
    for (int j = 0; j < 4; j++) {
        int min_ele = INT_MAX;
        for (int i = 0; i < 3; i++) {
            min_ele = min(min_ele,arr[i][j]);
        }
        if (min_ele > max_ele) {
            max_ele = min_ele;
        }
    }
    cout << max_ele;
}