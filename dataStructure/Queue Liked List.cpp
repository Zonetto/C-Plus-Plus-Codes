#include <iostream>
class QList{
private:
struct Node{
int data;
Node* next;
};
public:
Node *Front = nullptr, *Tail = nullptr;
bool isEmpty(){
if (Front == nullptr && Tail == nullptr)
return true;
else return false;
}
void enqueue(int item){
Node* newNode = new Node;
newNode->data = item;
newNode->next = nullptr;
if (isEmpty())
Front = Tail = newNode;
else{
Tail->next = newNode;
Tail = newNode;
}
}
int denqueue(){
Node* temp = Front;
if (isEmpty()) return -1;
if (Front == Tail)
Front = Tail = nullptr;
else {
Front = Front->next;
}
delete temp;
}
int front_val(){
if (isEmpty()) return -1;
else
return Front->data;
}
void Display(){
while(!isEmpty()){
std::cout<<front_val()<<"\n";
denqueue();
}
}
};
int main(){
QList QL;
QL.enqueue(3);
QL.enqueue(5);
QL.enqueue(8);
QL.enqueue(10);
QL.enqueue(13);
QL.denqueue();
QL.Display();
}