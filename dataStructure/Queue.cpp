#include<iostream>
#define SIZE 5
using namespace std;
int queue[SIZE], front = 0, rear = -1;
int Enqueue(int val){
    if (rear == SIZE - 1)
        return -1;
    else {
        rear++;
        queue[rear] = val;
    }
}
int Dequeue(){
    if (front > rear) return -1;
    else{
        front++;
    }
}
void Print(){
    for (int i = front; i <= rear ; i++){
        cout << queue[i] << " ";
    }
}
int main(){
    int val;
    for (int i = 0; i < 5; i++) {
        cin >> val;
        Enqueue(val);
    }
    Print();
    cout << "\n-------\n";
    for (int i = 0; i < 3; i++) {
        Dequeue();
    }
    Print();
}