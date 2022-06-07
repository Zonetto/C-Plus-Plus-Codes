#include <iostream>
using namespace std;
struct student {
    int id;
    string firstName;
    char lastName[10];
};
int main() {
    char a[5];
    student st1;  //, *pi;
    st1.firstName = "ahhh";
    // st1.lastName[0] = 'ali';
    st1.id = 1;
    // pi->firstName[0] = 'a';
    // pi->id = 123;
    // cout << pi->firstName[0] << " " << pi->id <<'\n';
    cout << st1.firstName << " " << st1.id;
}