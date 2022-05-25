#include <iostream>
using namespace std;
template <typename Cl>
class Temp {
   private:
    int age;
    Cl phone;

   public:
    void sort(Cl a, b) {}
};
template <typename T>
void Template(T a, T b) {
    T temp = a;
    a = b;
    b = temp;
}
template <typename T1, typename T2>
T1 returnMax(T1 a, T2 b) {
    if (a > b)
        return a;
    else
        return b;
}
int main() {
    double a = 17.5;
    int b = 10;
    cout << returnMax(a, b);
    Temp<string> TP;
}