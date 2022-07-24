#include <cstring>
#include <iostream>
using namespace std;
class T{
    private:
    int *x, *y;
    public:
    void Print(){
        cout << (*x * *y);
    }
    void Enter(int*, int*);
};
void T::Enter(int *x, int *y){
    this->x = x;
    this->y = y;
}
int main() {
    T t;
    int x = 5, y = 10;
    t.Enter(&x, &y);
    t.Print();
}