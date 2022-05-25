#include <iostream>
using namespace std;
const int SIZE = 10;
void binarySearch(int arr[], int value) {
    int low = 0, counter = 0;
    int high = SIZE - 1;
    while (low <= high) {
        // cout <<  counter++;
        int mid = (low + high) / 2;
        if (arr[mid] == value) {
            cout << mid + 1 << '\n';
            break;
        } else if (arr[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return exit(0);
}
int main() {
    int arr[SIZE] = {33, 55, 10, 44, 90};
    binarySearch(arr, 90);
}