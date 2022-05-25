#include <iostream>
using namespace std;
void drawing(int W, bool check = false) {
    for (int i = 0; i < W; i++) {
        if (check == false) {
            cout << "*****";
            check = true;
        } else {
            cout << "     ";
            check = false;
        }
    }
}
void square(int c, bool check = false) {
    for (int i = 0; i < 3; i++) {
        drawing(c, check);
        cout << "\n";
    }
}
void Print(int row, int column) { 
    bool check = false;

    for (int i = 0; i < column; i++) {
        square(row, check);
        if (check == false)
            check = true;
        else
            check = false;
    }
}
int main() {
    int col = 5, row = 5;
    Print(col, row);
}