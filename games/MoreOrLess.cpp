#include <stdio.h>
#include <stdlib.h>
#include <time.h>
const int max = 100, min = 1;
void Chack(int temp, int input) {
    if (temp < input)
        printf("Greater !!!\n");
    else if (temp > input)
        printf("Lesser !!!\n");
    else
        printf("Bravo, you have found the mysterious number !!!\n");
}
int main() {
    srand(time(NULL));
    int input, CounterLives = 0, agen;
    int temp = (rand() % max) + min;
    printf("%d\n", temp);
    while (input != -1) {
        do {
            scanf("%d", &input);
            Chack(temp, input);
            CounterLives++;
        } while (input != temp);
        printf("%d\n", CounterLives);
        
        printf("Try agen? = -1\n");
        scanf("%d", &agen);
    }
}