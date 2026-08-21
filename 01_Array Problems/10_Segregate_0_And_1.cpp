#include <iostream>
#include <vector>
using namespace std;
void method1(vector<int>& arr) {
    int i = 0, j = arr.size() - 1;
    while (i < j) {
        if (arr[i] == 0) i++;
        else if (arr[j] == 1) j--;
        else if (arr[i] == 1 && arr[j] == 0) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

void method2(vector<int>& arr) {
    int zeroes = 0, ones = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 0) zeroes++;
        else ones++;
    }
    for (int i = 0; i < zeroes; i++) {
        arr[i] = 0;
    }
    for (int i = zeroes; i < arr.size(); i++) {
        arr[i] = 1;
    }
}

void print(vector<int>& arr) {
    for (int ele : arr) cout << ele << " ";
    cout << endl;
}

int main() {
    // sort(arr.begin(), arr.end());
    vector<int> arr = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};

    // Method 1 (One Pass)
    method1(arr);
    print(arr);

    // Methhod 2
    method2(arr);
    print(arr);
}