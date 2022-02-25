// basic file operations
#include <fstream>
#include <iostream>
using namespace std;
int main() {
    ofstream myfile;
    int x = 10;
    if () {
        cout << "";
    }
   
    myfile.open("example.txt");
    int x = 5;
    while (x) {
        myfile << "Writing this to a file.\n";
        x--;
    }

    myfile.close();
    return 0;
}