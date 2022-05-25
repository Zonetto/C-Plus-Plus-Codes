#include <iostream>
using namespace std;
int main() {
    int row = 5;
    for (int i = 1; i <= row; ++i) {
        for (int j = 0; j < row - i; ++j)  // space
            cout << " ";
        for (int j = 0; j < i * 2 - 1; j++)
            cout << "*";
        cout << "\n";
    }
    for (int i = row / 2 + 1; i <= row; ++i) {
        for (int j = 0; j < row - i; ++j)  // space
            cout << " ";
        for (int j = 0; j < i * 2 - 1; j++)
            cout << "*";
        cout << "\n";
    }
    // for (int i = 2; i <= row; ++i) {                   //leg of stars   ***
    //     for (int j = row - 2; j <= row; ++j)  // space //               ***
    //         cout << " ";                               //               ***
    //     for (int j = 1; j < row -1; ++j)
    //         cout << "*";
    //     cout << "\n";
    // }

    for (int f = 0; f < row - 3; f++) {
        for (int i = 0; i < row - 2; ++i)  // Lop leg of column
            cout << " ";                   // |-|
        cout << "|-|\n";
    }
}