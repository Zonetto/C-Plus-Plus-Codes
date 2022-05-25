#include <iostream>
using namespace std;
#define SIZE 4
class HomWork {
   private:
    int CountOdd() {
        static int count = 1;
        return count++;
    }
    int CountZerroAndOne() {
        static int temp = 0;
        return temp;
    }

   public:
    void ArrOdd(int arr[SIZE][SIZE]) {
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                if (CountOdd() % 2 != 0)
                    arr[i][j] = CountOdd() - 1;
            }
        }
    }
    void ArrZerroAndOne(int arr[SIZE][SIZE]) {
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++)
                if (i % 2 == 0)
                    arr[i][j] = CountZerroAndOne();
                else
                    arr[i][j] = CountZerroAndOne() + 1;
        }
    }
};
int main() {
    HomWork h;
    int arr[SIZE][SIZE];
    h.ArrOdd(arr);
    cout << "\n-------------\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++)
            cout << arr[i][j] << " ";
        cout << '\n';
    }
    cout << "\n-------------\n";
    h.ArrZerroAndOne(arr);
    cout << "\n-------------\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++)
            cout << arr[i][j] << " ";
        cout << '\n';
    }
    cout << "\n-------------\n";
    return 0;
}