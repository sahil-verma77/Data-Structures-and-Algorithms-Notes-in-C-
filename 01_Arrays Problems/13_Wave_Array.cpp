#include <iostream>
#include <vector>
using namespace std;
void wave_array(vector<int>& arr) {
    for (int i = 0; i < arr.size()-1; i += 2) {
        swap(arr[i], arr[i+1]);
    }
    for (int ele : arr) cout << ele << " ";
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    wave_array(arr);
}