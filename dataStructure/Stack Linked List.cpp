#include <iostream>
#include<cctype>
class StackList{
private:
struct Node{
int data;
Node* next;
};
Node* top = nullptr;
public:
bool isEmpty(){
if (top==nullptr) return true;
else return false;
}
void push(int item){
Node* newNode = new Node;
newNode->data = item;
if (isEmpty())
newNode->next = nullptr;
else
newNode->next = top;
top = newNode;
}
int pop(){
if (isEmpty()) return -1;
Node* temp = top;
top = top->next;
delete temp;
}
int Top(){
if (isEmpty())
return -1;
else
return top->data;

}
void Display(){
while (!isEmpty()){
std::cout<<Top()<<" ";
pop();
}
}
~StackList(){
Node* temp = top;
while (top != nullptr){
top = top->next;
delete temp;
temp = top;
}
}
};
int main(){