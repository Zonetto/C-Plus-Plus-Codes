#include <iostream>
using namespace std;
int main() {
    int n = 15;
    int arr[n] = {4, 4, 4, 5, 5, 5, 5, 9, 11, 11, 13, 13, 16, 18};
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = i; j < n && arr[i] == arr[j]; j++) {
            count++;
        }
        cout << arr[i] << " " << count << "\n";
        i = i + count - 1;
    }
    return 0;
}