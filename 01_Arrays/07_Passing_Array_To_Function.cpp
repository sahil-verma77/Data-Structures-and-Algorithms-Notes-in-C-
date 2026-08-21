#include <iostream>
using namespace std;
void change(int y[]) {
    y[0] = 20;
    y[1] = 3;
}

int main() {
    int x[] = {6, 1, 2};
    change(x);
    cout << x[0] << endl;
    cout << x[1] << endl;
    cout << x[2] << endl;
    // int arr[] = {-62,-35,-5,-1,-88,-34};
    // int n = sizeof(arr)/4;
}