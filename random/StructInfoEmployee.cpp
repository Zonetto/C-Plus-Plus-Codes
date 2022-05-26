#include <iostream>
using namespace std;
class ClassEmployees {
   private:
    struct StructEmployeesInfo {
        string name;
        float salary;
        float addition;
        float deduction;
    };

   public:
    ClassEmployees(string Name, float Salary, float Addition, float Deduction) {
        StructEmployeesInfo e;
        e.name = Name;
        e.salary = Salary;
        e.addition = Addition;
        e.deduction = Deduction;
    }
    float FinalSalary() {
        StructEmployeesInfo e;
        return (e.salary + e.addition) - e.deduction;
    }
};
int main() {
    ClassEmployees e("Ahmed", 500.500, 10.900, 20);
    cout << e.FinalSalary() << '\n';
}