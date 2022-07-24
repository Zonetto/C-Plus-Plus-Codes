#include <iostream>
using namespace std;
class ClassTrain {
   private:
    static int trainNumber;  // رقم القطار
    string trainName;        // اسم القطار
    string trainSource;      // مصدر القطار
    string trainInterface;   // وجهة القطار
    string journeyDate;      // تاريخ الرحلة
    string capacityMember;   // وضيفة العضو
   public:
    ClassTrain() {
        trainNumber++;  // main يزداد تلقائيا, في كل مرة نقوم بأستدعاء الكلاس في
    }
    void InputTrainData(string TrainName, string TrainSource, string TrainInterface,
                        string JourneyDate, string CapacityMember) {  // دالة لادخال بيانات القطار
        trainName = TrainName;
        trainSource = TrainSource;
        trainInterface = TrainInterface;
        journeyDate = JourneyDate;
        capacityMember = CapacityMember;
    }
    void PrintTrainData() {  // دالة لطباعة بيانات القطار
        cout << "Train Number: " << trainNumber << '\n';
        cout << "Train name: " << trainName << '\n';
        cout << "Train Source: " << trainSource << '\n';
        cout << "Train interface: " << trainInterface << '\n';
        cout << "journey date: " << journeyDate << '\n';
        cout << "Capacity member: " << capacityMember << '\n';
    }
    friend void Print(ClassTrain);
};
void Print(ClassTrain t) {
    cout << "Train Number: " << t.trainNumber << '\n';
    cout << "Train name: " << t.trainName << '\n';
    cout << "Train Source: " << t.trainSource << '\n';
    cout << "Train interface: " << t.trainInterface << '\n';
    cout << "journey date: " << t.journeyDate << '\n';
    cout << "Capacity member: " << t.capacityMember << '\n';
}
int ClassTrain::trainNumber = 0;
int main() {
    // for example
    ClassTrain t1;
    t1.InputTrainData("Train1", "Najaf", "Baghdad", "2020/3/2", "Ali");
    t1.PrintTrainData();
    cout << '\n';
    Print(t1);
    // ClassTrain t2;
    // t2.InputTrainData("Train2", "Baghdad", "Basra", "2020/4/20", "Ali");
    // t2.PrintTrainData();
    return 0;
}