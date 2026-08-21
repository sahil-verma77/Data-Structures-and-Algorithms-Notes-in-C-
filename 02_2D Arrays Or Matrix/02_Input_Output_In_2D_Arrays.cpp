#include <iostream>
using namespace std;

int main() {
    // Method 1
    int arr[3][4] = {};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Method 2
    // int rows, cols;
    // cout << "Enter rows and columns: ";
    // cin >> rows >> cols;

    // int arr[rows][cols];

    // // Nested loops for user input
    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         cout << "Enter element [" << i << "][" << j << "]: ";
    //         cin >> arr[i][j];
    //     }
    // }
}