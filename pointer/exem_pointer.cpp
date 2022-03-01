#include <iostream>             
using namespace std;
void increment (int *p){
cout << &p << "\n";
*p += 1;
}
int main(){
int x = 5;
cout << &x << "\n";
increment(&x);
cout<<x;
}