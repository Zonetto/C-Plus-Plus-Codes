#include <iostream>
using namespace std;
int main() {
    int x = 20810;
    int *p = &x;
    char *p1 = (char *)p;
    cout << (int)*p1;
}
// #include <iostream>
// using namespace std;
// int main(){
int x = 2081;
// int *p = &x;
// cout<<*p <<"\n";
// char *p1 = (char*)p;
// for (int i = 0; i <3; i++){
// cout<<(int)*p1<<" ";
// *p1 += i;
// }
// }
