#include <iostream>
using namespace std;
int sum(int arr[], int* odd, int* even) {
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 != 0)
            *odd += 1;
        else
            *even += 1;
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int odd = 0, even = 0;
    sum(arr, &odd, &even);
    cout << odd << " " << even << "\n";
}