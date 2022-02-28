#include <iostream>
using namespace std;
#define size 5
struct A{
int top=-1;
int st[size];
bool isEmpty(){
if (top==-1)
return true;
else return false;
}
void push(int x){
if (top==size-1)
cout<<"stack overflow\n";
else {
top++;
st[top]=x;
}
}
int pop(){
if (isEmpty())
cout<<"stack underflow\n";
else
top--;
}
int topp(){
if (isEmpty())
cout<<"stack underflow\n";
else
return st[top];
}
};
bool Bla(string ex){ //فحص الاقواس
A s;
for (int i=0; i<ex.length();i++){
if (ex[i]=='('||ex[i]=='{'||ex[i]=='[')
s.push(ex[i]);
else if (ex[i]==')'||ex[i]=='}'||ex[i]==']'){
if (s.isEmpty()) return false;
else if(che(s.topp(),ex[i])==false)return false;
s.pop();
}
}
if (s.isEmpty())return true;
else return false;
}
int main()
{
A a;
a.push(5);
a.push(6);
while(!a.isEmpty()){
cout<<a.topp()<<endl;
a.pop();
}
}