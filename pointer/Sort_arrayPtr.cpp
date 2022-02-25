#include <iostream>
using namespace std;
void Sort(int *ptr) {
    int temp = 0, k = 0;
    for (int i = 0; i < 5; i++) {
            // for (int j = j + 1; j < 5; j++){
            if (*(ptr + i) > *(ptr + 1)) {
            temp = *(ptr + i);
            *(ptr + i) = *(ptr + 1);
            *(ptr + 1) = temp;
        }
    }
    // return *ptr;
    for (int i = 0; i < 5; i++)
        cout << *(ptr + i) << " ";
}
int main() {
    int arr[5] = {4, 8, 1, 18, 0};
    Sort(arr);
    // for (int i = 0; i < 5; i++)
    // cout << arr[i] << " ";
    // cout << arr[1];
}