#include <iostream>
using namespace std;
int main() {
    int row = 5;
    for (int i = 1; i <= row; ++i) {
        for (int j = 1; j <= row - i; ++j)  // space
            cout << " ";
        for (int j = 1; j < i * 2; j++)
            cout << "*";
        cout << "\n";
    }
    for (int i = row / 2 + 1; i <= row; ++i) {
        for (int j = 1; j <= row - i; ++j)  // space
            cout << " ";
        for (int j = 1; j < i * 2; j++)
            cout << "*";
        cout << "\n";
    }
    for (int i = 3; i <= row; ++i) {
        for (int j = row - 2; j <= row; ++j)  // space
            cout << " ";
        for (int j = 1; j < row -1; ++j)
            cout << "*";
        cout << "\n";
    }
}