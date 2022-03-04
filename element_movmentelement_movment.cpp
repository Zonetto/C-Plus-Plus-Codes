#include <cmath>
#include <ctime>
#include <iostream>
#include <string>
const int len = 5;
int readLength() {
    int len = 0;
    cout << "Enter length:";
    cin >> len;
    if (len % 2 == 0) {
        throw(const char*) "Even Numbers are invaild";
    }
    return len;
}

void printArray(int (&arr)[len][len]) {
void printArray(int* arr, int len) {
    cout << "\n";
    for (int i = 0; i < len; i++) {
         for (int j = 0; j < len; j++) {
              cout << arr[i][j] << "  ";
        for (int j = 0; j < len; j++) {
            cout << arr[j * len + i] << "  ";
        }
        cout << "\n";
    }
     cout << "\n\n";
    cout << "\n\n";
}


void generateArray(int (&arr)[len][len]){
void generateArray(int* arr, int len) {
    // position in the array starts from 0-24
    int xPos;
    int yPos;
    do {
        xPos = rand() % 5;
        yPos = rand() % 5;

    } while (xPos == 2 && yPos == 2);
        xPos = rand() % len;
        yPos = rand() % len;

    arr[xPos][yPos] = 1;

    } while (xPos == (len / 2) && yPos == (len / 2));
    arr[xPos * len + yPos] = 1;
}

int findPath(int (&arr)[len][len]){
    int count = 0;
int get_Path(int* arr, int len) {
    int path = 0;
    for (int i = 0; i < len; i++) {
         for (int j = 0; j < len ; j++) {
              if(arr[i][j] == 1){
                  count = (abs(i - 2) + abs(j - 2));
                  break; 
              }
        for (int j = 0; j < len; j++) {
            if (arr[j * len + i] == 1) {
                path = (abs(i - (len / 2))) + abs(j - (len / 2));
                break;
            }
        }
    }
    return count;
    return path;
}

int main() {
    try {
        int path = 0;
        srand(time(NULL));
        const int len = readLength();
        int* arr = new int[len * len]{0};

    srand(time(NULL));
        generateArray(arr, len);
        path = get_Path(arr, len);
        printArray(arr, len);

    int arr[len][len] = {0};
        cout << "Path = " << path << endl;

    generateArray(arr);
        delete[] arr;
        arr = nullptr;

    int path = findPath(arr);

    printArray(arr);

    cout << "Path = " << path << endl;
    } catch (const char* e) {
        cout << e << endl;
    }

    return 0;