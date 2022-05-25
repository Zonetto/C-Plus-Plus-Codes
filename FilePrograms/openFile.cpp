// basic file operations
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <fstream>
#include <iostream>
#define MIX_SIZE 100
using namespace std;
void CounterWord(char read[], FILE *file) {
    int coun = 0;
    while (fgets(read, MIX_SIZE, file) != NULL) {
        coun++;
    }
    printf("\n%d", coun);
}
int main() {
    char read[MIX_SIZE], *strong;
    FILE *file;
    int chosenWordNumber = 3, characterRead = 0, wordNumber = 0;
    file = fopen("text.txt", "r");
    if (file == NULL) {
        exit(0);
        return 0;
    }
    // CounterWord(read, file);
    do {
        characterRead = fgetc(file);
        if (characterRead == '\n')
            wordNumber++;
    } while (characterRead != EOF);
    cout << wordNumber << "\n";
    rewind(file);
    while (chosenWordNumber > 0) {
        characterRead = fgetc(file);
        if (characterRead == '\n')
            chosenWordNumber--;
    }
    fgets(strong, 100, file);
    strong[strlen(strong) - 1] = '\0';
    printf("%s\n%s", strong, characterRead);
    fclose(file);
    // ofstream myfile;
    // int x = 10;
    // {
    //     cout << "";
    // }
    // myfile.open("example.txt");
    // while (x) {
    //     myfile << "Writing this to a file.\n";
    //     x--;
    // }

    // myfile.close();
    return 0;
}