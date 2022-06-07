#include <iostream>
#define SIZE 5
using namespace std;
int stack[SIZE], top = -1;
int Push(int val) {
    if (top == SIZE - 1)
        return -1;
    else {
        top++;
        return stack[top] = val;
    }
}
int Pop() {
    if (top == -1)
        cout << "Stack overflow"
             << " ";
    else
        return top--;
}
int Print() {
    if (top == -1)
        return -1;
    else
        return stack[top];
}
void Print2() {
    for (int i = top; i >= 0; i--)
        cout << stack[i] << " ";
}
int main() {
    int val;
    for (int i = 0; i < 5; i++) {
        cin >> val;
        Push(val);
    }
    Print2();
    cout << "\n-------\n";
    for (int i = 0; i < 3; i++) {
        Pop();
    }
    Print2();
    cout << "\n-------\n";
    for (int i = 0; i < 8; i++) {
        Pop();
    }
    Print2();
    cout << "\n-------\n";
    for (int i = 0; i < 12; i++) {
        cin >> val;
        Push(val);
    }
    Print2();
}