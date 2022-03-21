/*  C++ Program to Remove Characters in String Except Alphabets  */
#include <iostream>
// #include <cctype>
// #include <cstring>
// #include <string>
using namespace std;
int main() {
    string line;
    cout << "Enter any string :: ";
    cin >> line;

    cout << "\nThe Original String is :: " << line << endl;

    for (int i = 0; i < line.size(); ++i) {
        if (!islower(line[i]) || isupper(line[i]) || isalpha(line[i])) {
            //    if (!((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))) {
             line[i] = '';
        }
    }

    cout << "\nAfter Removing Characters, String is :: " << line << endl;

    return 0;
}