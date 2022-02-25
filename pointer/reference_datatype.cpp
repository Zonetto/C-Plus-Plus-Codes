#include <iostream>             
using namespace std;
void increment (int &ref){
ref ++;
}
int main (){
/*
int x = 10, y = 9;
int &p = x; // 1-An initial value must be given 2-Cannot change Reference Data Type
p = y;
cout << p+1;
*/
int x = 5;
increment(x);
cout << x; // x = 6
}