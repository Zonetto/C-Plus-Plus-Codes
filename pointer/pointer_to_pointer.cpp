#include <iostream>             
using namespace std;
int main(){
int x = 10;       //integer
int *p1 = &x;     //pointer to int
cout << &x << " " << p1 << " " << &p1 << "\n";
int **p2 = &p1;   //pon to(pon to int)
int ***p3 = &p2;  //pon to(pon to(pon to int))
cout << p2 << " " << &p2 << "\n";
cout << p3 << " " << &p3 << "\n";
cout << *p1 << " " << **p2 << " " << ***p3 << "\n";
}