#include <ctime>
#include <iostream>
using namespace std;
const int line = 5;
int main() {
    srand(time(NULL));
    int xPos, yPos, count = 0;
    xPos = rand() % 5;
    yPos = rand() % 5;
    int arr[line][line] = {0};
    arr[1][4] = 1;
    for (int i = 0; i < line; i++) {
        for (int j = 0; j < line; j++) {
            if (arr[i][j] == 1) {
                count = (abs(i - (line / 2)) + abs(j - (line / 2)));
                break;
            }
        }
    }
    cout << count << "\n";
    for (int i = 0; i < line; i++) {
        for (int j = 0; j < line; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }
            }