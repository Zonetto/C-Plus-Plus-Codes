#include <iostream>
using namespace std;
int main() {
    string name = "ahmed";
    int counter = 0;
    for (int i = 0; i < name[i] != '\0'; i++) {
        counter += 1;
    }
    cout << counter;
}