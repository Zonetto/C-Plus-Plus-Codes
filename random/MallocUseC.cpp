#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main() {
    int **locaMamur = NULL;
    int n = 5, counter = 0, sum = 0;
    locaMamur = (int *)malloc(sizeof(int));
    if (locaMamur == nullptr) {
        exit(0);
    }
    for (int i = 0; i < n; i++) {
        *(locaMamur + i) = counter;
        sum += *(locaMamur + i);
        counter += i;
    }
    cout << sum;
    free(locaMamur);
    return 0;
}