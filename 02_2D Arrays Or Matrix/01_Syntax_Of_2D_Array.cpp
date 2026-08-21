#include <iostream>
using namespace std;
// -------
// | | | |
// -------
// | | | |
// -------
// | | | |
// ------- (3x4)
int main() {
    // int arr[3][4];
    int arr[][4] = {{5,8,1,2},{9,9,4,4},{7,0,3,5}};
    for (int i = 0; i < 3; i++) { // TC = O(mn)
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Transpose
    // Method 1
    cout << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    // Method 2
    cout << endl;
     for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 3; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}