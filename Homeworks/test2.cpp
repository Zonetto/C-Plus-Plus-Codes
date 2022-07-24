#include <iostream>
using namespace std;
class Hom {
   private:
    int *number = new int;
   public:
    Hom(int f) {
        *number = f;
    }
    ~Hom() {
        delete number;
    }
    void Factorial() {
        int temp = 1;
        for (int i = 1; i <= *number; i++) {
            temp = temp * i;
        }
        cout << temp;
    }
};
int main() {
    Hom h = Hom(5);
    h.Factorial();
    return 0;
}