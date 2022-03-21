#include <iostream>
using namespace std;
int main() {
    int x, count = 0;
    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= 5; j++) {
            cin >> x;
            if (x == 1) {
                count = abs(i - 3) + abs(j - 3);
                break;
            }
        }
    cout << count;
    return 0;
}