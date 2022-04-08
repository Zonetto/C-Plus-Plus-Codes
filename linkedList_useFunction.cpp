#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val) {
        this->data = val;
        this->next = nullptr;
    }
};
Node* head = nullptr;
void Append(int val) {
    Node* newNode = new Node(val);
    if (head == nullptr)
        head = newNode;
    else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void insert_firstNode(int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void insert_Pos(int val, int pos) {
    Node* newNode = new Node(val);
    if (pos == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node* temp = head;
    for (int i = 0; i < pos - 1 && temp->next != nullptr; i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void disPlay() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void count_Node() {
    Node* temp = head;
    int co = 0;
    while (temp != nullptr) {
        co++;
        temp = temp->next;
    }
    cout << co;
}
void searchElement(int target) {
    Node* temp = head;
    while (temp->data != target && temp->next != nullptr) {
        temp = temp->next;
    }
    if (temp->data == target)
        cout << "Yes";
    else
        return exit(-1);
}
void search_Node(int pos) {
    if (head == nullptr)
        return exit(-1);
    int index = 0;
    Node* temp = head;
    while (temp != nullptr) {
        temp = temp->next;
    }
    if (temp->data == pos)
        cout << index;
    else
        index++;

    cout << index;
}
void insertAfterNode(int item){
    Node* newNode = new Node(item);
    if (head == nullptr)
        cout << "N";
    else{
        Node* temp = head;
        while ((temp->data != item) && (temp->next != nullptr))
        {
            /* code */
        }
        if (temp->data == item){
            newNode->next = temp->next;
        temp->next = newNode;
        }
        else
            exit(0);
    }

}
void InsertMiddleNode(int item) { //eror
    if (head == nullptr)
        return;
    Node* newNode = new Node(item);
    Node* temp = head;
    newNode->next = temp->next;
    temp->next = newNode;
}
void InsertMiddleNode_t(int item, int count) {
    if (head == nullptr)
        return;
    Node* temp = head;
    Node* newNode = new Node(item);
    int mod = (count / 2);
    for (int i = 0; i < mod - 1 && temp->next != nullptr; i++) {
       temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void deletaNode(){
while (head != nullptr)
{
    delete (head);
    head = head->next;
}

}
int main() {
    Append(5);
    Append(4);
    Append(3);
    insert_Pos(6, 0);
    disPlay();
    cout << "\n";
    search_Node(1);
}
