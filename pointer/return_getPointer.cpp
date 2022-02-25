#include <iostream>
using namespace std;
int* getPointer(int* ptr) {
    int* resultPtr = new int((*ptr) * 2);
    return resultPtr;
}
void printName(std::string name) {
    std::cout << name << "\n";
}
int main() {
    int x = 10;
    printName("Ahmed");
    int* ptr = getPointer(&x);
    std::cout << *ptr << "\n";
    delete ptr;
    ptr = nullptr;
    return 0;
}