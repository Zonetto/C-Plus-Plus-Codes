#include<iostream>
#include <math.h>
using namespace std;
int main (){
    int Numper, chack = 0; 
    cin >> Numper;
    for (int i = 2; i <= sqrt(Numper); i++){ 
        if (Numper % i == 0)  
            cout << "NO";      
        else
            cout << "Yes";
    }
}