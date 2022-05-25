#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char Data[3];     // I'm interested in this information
    char junk1, junk2;  // junk variables to avoid first two characters

    FILE* file = fopen("dico.txt", "r");  // open file

    for (int i = 0; i < 3; i++)  // each loop will read new line of file; i<3 for 3 lines in file
    {
        fscanf(file, "%s %s %lf\n", &junk1, &junk2, &Data[i]);  // store info in Data array
        printf("%f\n", Data[i]);                                // print Data, just to check
    }
    fclose(file);

    int Nx;  // store data in respective variables
    int Ny;
    double T;

    Nx = Data[0];
    Ny = Data[1];
    T = Data[2];

    printf("Value of Nx is %d\n", Nx);  // Print values to check
    printf("Value of Ny is %d\n", Ny);
    printf("Value of T is %f\n", T);
}