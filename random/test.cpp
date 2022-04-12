#include <iostream>
#include <sstream>
#include <string>
using namespace std;
#define MIX_SIZE 3
struct Student {
    string name;
    int number;
    int marks[2];
};
int main() {
    int sum = 0, averg[MIX_SIZE];
    Student s[MIX_SIZE];
    static int id = 1;
    for (int i = 0; i < MIX_SIZE; i++) {
        sum = 0;
        s[i].number = id;
        cout << "Enter name: ";
        cin >> s[i].name;
        cout << "Enter tow matks: ";
        for (int j = 0; j < 2; j++) {
            cin >> s[i].marks[j];
            sum += s[i].marks[j];
        }
        averg[i] = sum / 2;
        id++;
        cout << '\n';
    }
    for (int i = 0; i < MIX_SIZE; i++) {
        if (averg[i] > 60)
            cout << s[i].number << " " << s[i].name;
        cout << '\n';
    }
}