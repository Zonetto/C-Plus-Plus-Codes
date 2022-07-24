#include <iostream>
#define SIZE 5
using namespace std;
class Hom {
   public:
    int odd[SIZE];
    int even[SIZE];
    int array[SIZE];
    int k1 = 0;
    int k2 = 0;
   public:
    void Data(int array[]) {  // insert data by user
        for (int i = 0; i < SIZE; i++) {
            this->array[i] = array[i];
        }
    }
    void Chack() {  // To separate even and odd values
        for (int i = 0; i < SIZE; i++) {
            if (array[i] % 2 == 0) {
                even[k1] = array[i];
                k1++;
            } else {
                odd[k2] = array[i];
                k2++;
            }
        }
    }
    friend void Print();  // frirnd function to print data
};
void Print(Hom h) {
    for (int i = 0; i < h.k1; i++) {
        cout << h.even[i] << "   ";
    }
    cout << '\n';
    for (int i = 0; i < h.k2; i++) {
        cout << h.odd[i] << "   ";
    }
}
int main() {
    // exm...
    Hom h;
    int array[SIZE] = {1, 2, 3, 4, 5};
    h.Data(array);
    h.Chack();
    Print(h);
    return 0;
}