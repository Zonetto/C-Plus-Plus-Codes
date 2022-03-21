#include <cstring>
#include <iostream>
using namespace std;
int main() {
    string str1, str2;
    cin >> str1;

    for (int i = 0; i < str1.length(); i++){
        if (str1[i] != 'a' || str1[i] != 'o' || str1[i] != 'i' || str1[i] != 'y' || str1[i] != 'u' || str1[i] != 'e')
            str2 = str2 + '.';
        str2 = str2 + (char)towlower(str1[i]);
    }
        cout << str2;
}