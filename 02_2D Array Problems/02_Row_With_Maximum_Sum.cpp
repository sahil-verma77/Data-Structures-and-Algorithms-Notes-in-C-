#include <iostream>
#include <vector>
#include <climits>
using namespace std;
void method1(int arr[][4]) {
    int max_row = -1, max_sum = INT_MIN;
    for (int i = 0; i < 3; i++) {
        int local_sum = 0;
        for (int j = 0; j < 4; j++) {
            local_sum += arr[i][j];
        }
        if (local_sum > max_sum) {
            max_sum = local_sum;
            max_row = i;
        }
    }
    cout << "Row: " << max_row << endl << "Max sum: " << max_sum;
}

void method2(int arr[][4]) { // My Method
    vector<int> sum;
    for (int i = 0; i < 3; i++) {
        int local_sum = 0;
        for (int j = 0; j < 4; j++) {
            local_sum += arr[i][j];
        }
        sum.push_back(local_sum);
    }
    int mx = INT_MIN;
    for (int i = 0; i < sum.size(); i++) {
        mx = max(mx,sum[i]);
    }
    for (int i = 0; i < sum.size(); i++) {
        if (sum[i] == mx) cout << "Row: " << i;
    }
}

int main() {
    int arr[][4] = {{5,8,1,2},{9,9,4,4},{7,0,3,5}};
    method1(arr);
    cout << endl;

    method2(arr);
    cout << endl;
}