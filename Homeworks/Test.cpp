#include <iostream>
using namespace std;
class so {
   public:
    int a() {
        static int temp = 0;
        return temp;
    }
    int b() {
        static int temp = 1;
        return temp;
    }
};
int main() {
    so s;
    int arr[4][4], x = 1;
    for (int j = 0; j < 4; j++) {
        arr[0][j] = s.a();
        arr[1][j] = s.b();
        arr[2][j] = s.a();
        arr[3][j] = s.b();
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) {
            arr[i][j] = x;
            x += 2;
        }
    cout << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }
}