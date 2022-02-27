#include <iostream>
using namespace std;
int main() {
    int row = 5;
    for (int i = row; i > 0; --i) {
        for (int j = row - i; j >= 1; --j)  // space
            cout << " ";
        for (int j = 1; j < i * 2; j++)
            cout << "*";
        cout << "\n";
    }
}