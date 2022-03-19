#include <iostream>
using namespace std;
const int size = 10;
int binarySearch(int arr[], int value) {
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == value)
            return mid + 1;
        else if (arr[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main() {
    int arr[size] = {33, 55, 10, 44, 90};
    cout << binarySearch(arr, 55);
}