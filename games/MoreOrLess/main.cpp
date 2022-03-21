#include"MoreOrLess.h"
int main() {
    srand(time(NULL));
    ClassMore ClassM{};
    int n = 0, level = 100;
    do{
    scanf_s("%d", &level);
        ClassM.gameLevel(level);
    printf("%d\n", ClassM.returnTemp());
    ClassM.playPrint();
    printf("Agan Play? = -1\n");
    scanf_s("%d", &n);
    } while (n == -1);
  
}