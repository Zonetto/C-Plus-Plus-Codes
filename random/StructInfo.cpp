#include <iostream>
using namespace std;
class Empl {
   private:
    struct SEmpl {
        string name;
        float salary;
        float addition;
        float de;
    };
   public:
    Empl(string Name, float Salary, float Addition, float De) {
        SEmpl e;
        e.name = Name;
        e.salary = Salary;
        e.addition = Addition;
        e.de = De;
    }
    float Final() {
        SEmpl e;
        return (e.salary + e.addition) - e.de;
    }
};
int main() {
    Empl e("Ahmed", 500.500, 10.900, 20);
    cout << e.Final() << '\n';
}