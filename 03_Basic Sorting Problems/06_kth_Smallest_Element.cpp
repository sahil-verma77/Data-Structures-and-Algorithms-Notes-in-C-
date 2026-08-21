#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int method1(vector<int> &arr, int k) { // TC = O(nlogn)
    sort(arr.begin(),arr.end());
    return arr[k-1];
}
int method2(vector<int> &arr, int k) { // TC = O(nk)
    int n = arr.size();
    // Apply Selection Sort, but only 'k' passes 
    for (int i = 0; i < k; i++) { // k passes
        int mn = arr[i], mnIdx = i;
        for (int j = i; j < n; j++) {
            if (arr[j] < mn) {
                mn = arr[j];
                mnIdx = j;
            }
        }
        swap(arr[i],arr[mnIdx]);
    }
    return arr[k-1];
}
void print(vector<int>& arr) {
    for (int ele : arr) cout << ele << " ";
    cout << endl;
}

int main() { // Complete this
    // Gng (Kth Smallest)
    vector<int> arr = {93,17,4,64,46,18,3,61};
    int k = 3;
    print(arr);
    
    // int result = method1(arr, k);
    // int result = method2(arr, k);
    // Or
    // cout << method1(arr, k);
    cout << method2(arr, k);

}