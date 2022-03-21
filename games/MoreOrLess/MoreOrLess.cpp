#include"MoreOrLess.h"
void ClassMore::chack(unsigned int &input) {
    if (temp < input)
        printf("Greater !!!\n");
    else if (temp > input)
        printf("Lesser !!!\n");
    else
        printf("Bravo, you have found the mysterious number !!!\n");
}
int ClassMore::returnTemp()
{
    temp = (rand() % mix) + min;
    return temp;
}
void ClassMore::playPrint() {
    do {
        scanf_s("%d", &input);
        ClassMore::chack(input);
    } while (input != temp);
}

int ClassMoreOrLess::gameLevel(int level)
{
    if (level == LOw)
        return  mix = LOw;
    else if (level == MEdium)
        return  mix = MEdium;
    else if(level == HIgh)
        return  mix = HIgh;
    else return mix = 50;
}
