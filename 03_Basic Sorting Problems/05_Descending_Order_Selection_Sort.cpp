#include <iostream>
#include <vector>
using namespace std;
void print(vector<int>& arr) {
    for (int ele : arr) cout << ele << " ";
    cout << endl;
}

int main() {
    vector<int> arr = {3,1,2,5,4,0};
    int n = arr.size();
    print(arr);
    
    // Selection Sort
    for (int i = 0; i < n-1; i++) {
        int mx = arr[i], mxInd = i;
        for (int j = i; j < n; j++) {
            if (arr[j] > mx) {
                mx = arr[j];
                mxInd = j;
            }
        }
        swap(arr[i],arr[mxInd]);
    }
    print(arr);
}