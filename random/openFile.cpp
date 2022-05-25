// basic file operations
#include <fstream>
#include <iostream>
using namespace std;
int main() {
    int *x = new int;
    x = nullptr;
    if (x == nullptr){
        exit(0);
    }
    cin >> *x ;
    cout << *x;
    delete (x);
    // ofstream myfile;
    // int x = 10;
    // myfile.open("example.txt");
    // while (x) {
    //     myfile << "Writing this to a file.\n";
    //     x--;
    // }
    // myfile.close();
    return 0;
}