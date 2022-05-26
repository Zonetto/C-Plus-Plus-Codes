#include <iostream>
using namespace std;
class A {
    // private:
    // public:
   protected:
    int numper1;
    int numper2;
    // char *op;

   public:
    void Set_numper1(int numper) {
        numper1 = numper;
    }
    void Set_numper2(int numper) {
        numper2 = numper;
    }
};
class B : public A {
   public:
    int Oper(char op) {
        switch (op) {
            case '+':
                return numper1 + numper2;
                break;
            case '-':
                return numper1 + numper2;
                break;

            default:
                return 'n';
        }
    }
};
int Oper(char *op) {
    switch (op) {
        case '+':
            return 5 + 5;
            break;
        case '-':
            return 0 + 8;
            break;

        default:
            return 'n';
    }
}
    int main() {
        B b;
        b.Set_numper1(5);
        b.Set_numper2(10);
        // cout << b.Oper('8');
        char *p;
        p = "kaet";
        cout << *(p + 1);
    }