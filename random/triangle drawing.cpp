#include <iostream>
using namespace std;
int main() {
    int row = 4;
    for (int i = 0; i < row; --i) {
        for (int j = 1; j <= row - i; --j)  // space
            cout << " ";
        for (int j = 1; j < i * 2; j++)
            cout << "*";
        cout << "\n";
    }
}