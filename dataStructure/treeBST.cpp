#include <iostream>
#include <queue>
class BST{
private :
struct Node{  
int data;
Node* Right;
Node* Left;
Node (int vel){
data = vel;
Right = Left = nullptr
}
};
private:
Node* root = nullptr;
void addhelper(Node* temp , int item){
if (item <= temp->data){
if (temp->Left == nullptr){
Node* new_Node = new Node(item);
temp->Left = new_Node;
}
else {
addhelper(temp->Left , item);
}
}
else {
if (temp->Right == nullptr){
Node* new_Node = new Node(item);
temp->Right = new_Node;
}
else {
addhelper(temp->Right , item);
}
}
}
void insert_item(int item){ // يوجد خطأ ما في الادخال
Node* new_Node = new Node(item);
if (root == nullptr){
root = new_Node;
return;
}
Node* temp = root;
Node* parent = nullptr;
while(temp != nullptr){
parent = temp;
if (item <= temp->data )
temp = temp->Left;
else
temp = temp->Right;
}
if (item <= parent->data)
parent = parent->Left;
else
parent = parent->Right;
}
int getMax_helper(Node* temp){
if (temp->Right == nullptr)
return temp->data;
else
return getMax_helper(temp->Right);
}
int getMin_helper(Node* temp){
if (temp->Left == nullptr)
return temp->data;
else
return getMax_helper(temp->Left);
}
int getHeightHelper(Node* temp){
if (temp == nullptr) return -1;
int leftSubTree = getHeightHelper(temp->Left);
int rightSubTree = getHeightHelper(temp->Right);
return 1 + std::max(leftSubTree, rightSubTree);
}
int prOrder_Helper(Node* temp){
if (temp == nullptr) return -1;
//std::cout<<temp->data<<" ";
prOrder_Helper(temp->Right);
std::cout<<temp->data<<" "; //In order
prOrder_Helper(temp->Left);
//std::cout<<temp->data<<" "; Bost order
}
Node* removeHelper(Node* root, int data){
if (root == nullptr) return root;
else if (data < root->data)
root->Left = removeHelper(root->Left, data);
else if (data > root->data)
root->Right = removeHelper(root->Right, data);
else{
if (root->Left == nullptr){
Node* temp = root->Right;
delete root;
return temp;
}
else if (root->Right == nullptr){
Node* temp = root->Left;
delete root;
return temp;
}
else{
int maxValue = this->getMax_helper(root->Right);
root->data = maxValue;
root->Left = removeHelper(root->Left, maxValue);
}
			
}
return root;
}
public:
void add_method2(int item){
Node* new_Node = new Node(item);
if (root == nullptr){
root = new_Node;
return;
}
else
return addhelper(root , item);
}
int getMax(){
Node* temp = root;
while(temp->Right != nullptr){
temp = temp->Right;
}
return temp->data;
}
int getMin(){
Node* temp = root;
while(temp->Left != nullptr){
temp = temp->Left;
}
return temp->data;
}
int getMax_method2(){
return getMax_helper(root);
}
int getMin_method2(){
return getMin_helper(root);
}
int getHeight(){
if (root == nullptr) return -1;
else 
return getHeightHelper(root);
}
void display_levelOrder(){
//BFS
if (root == nullptr) return;
std::queue<Node*> q;
q.push(root);
while (!q.empty())
{
Node* current = q.front();
q.pop();
std::cout<<current->data<<" ";
if (current->Left != nullptr) q.push(current->Left);
if (current->Right != nullptr) q.push(current->Right);
}
std::cout<<"\n";
}
void display_prOrder(){
//DFS
if (root != nullptr)
prOrder_Helper(root);
}
void remove(int data){
root = removeHelper(root, data);
}
};
int main(){
BST bst;
bst.add_method2(15);
bst.add_method2(6);
bst.add_method2(3);
bst.add_method2(9);
bst.add_method2(8);
bst.add_method2(20);
bst.add_method2(25);
//std::cout<<bst.prOrder_Helper()<<"\n";
bst.display_prOrder();
std::cout<<"\n";
bst.remove(9);
bst.display_prOrder();
// std::cout<<bst.prOrder_Helper()<<"\n";
}