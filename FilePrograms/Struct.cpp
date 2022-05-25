#include <stdio.h>
#include <stdlib.h>

#include <cstring>
#include <fstream>
#include <iostream>
#define SIZE 3
using namespace std;
struct student {
    char name[10];
    char roll;
};
int main() {
    int dgree = 0;
    FILE *file;
    char name[10];
    file = fopen("dgree.txt", "wb");
    if (file == NULL) {
        exit(0);
        return 0;
    }
    struct student students[3] = {
        {"Tina", 'A'},
        {"Jack", 'N'},
        {"May", 'A'}};
    fwrite(&students, sizeof(students), 1, file);
    // for (int i = 0; i < SIZE; i++)
    // {
    //     scanf("%s" , name);
    //     scanf("%d", &dgree);
    //     fprintf(file, "\n%s = %d", name, dgree);
    // }
    fclose(file);

    return 0;
}