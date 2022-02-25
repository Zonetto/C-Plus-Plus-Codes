#include <iostream>             
using namespace std;
int main(){
int x[] = {1,2,3};
int *p = x; // *p = &x[0] or *p = x
for (int i = 0; i < 3; i++)
cout << *p+i << " ";       // cout << p[i];
// cout << *p << " \n";    // cout << p[0];
// cout << *p+1 << " \n";  // cout << p[1];
// cout << *p+2 << " \n";  // cout << p[2];
}