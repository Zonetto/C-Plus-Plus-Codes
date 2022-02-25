#include <iostream>
using namespace std;
int main() {
    int columns = 3, rows = 2;
    int* x[rows];
    x[0] = new int[columns];
    x[1] = new int[columns];
    x[2] = new int[columns];
    x[0] = {{1, 2, 3}, {4, 5, 6}};
    cout << x[1][0];
    delete x[0];
    // int **x = new int *[rows];
    // for (int i = 0; i < rows; i++)
    //     x[i] = new int[columns];
    // //---------------- in delete
    // for (int i = 0; i < rows; i++)
    //     delete[] x[i];
    // delete[] x;
}