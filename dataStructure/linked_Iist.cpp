#include <cctype>
#include <iostream>
using namespace std;
class LinkesList {
   public:
    struct Node {
        int date;
        Node* next;
        Node(int item) {
            this->date = item;
            this->next = nullptr;
        }
    };
    Node* head = NULL;

   public:
    void Append(int item) {
        Node* Newnode = new Node(item);
        if (head == NULL)
            head = Newnode;
        else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = Newnode;
        }
    }
    void insert_firstNode(int val) {  // homework unv
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }
    void insert_Pos(int item, int pos) {
        Node* newNode = new Node(item);
        if (pos == 0) {
            newNode->next = head;
            head = newNode;
            return;
        }
        Node* temp = head;
        for (int i = 0; i < pos - 1 && temp->next != NULL; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void Display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->date << " ";
            temp = temp->next;
        }
    }
    void remove_val(int item) {
        // There's a mistake
        Node *prev, *temp;
        prev = temp = head;
        if (head == NULL) return;
        prev = temp = head;
        if (temp->date = item) {
            head = temp->next;
            delete temp;
            return;
        }
        while (temp != NULL && temp->date != item) {
            prev = temp;
            temp = temp->next;
            // return;
        }
        if (temp == NULL)
            return;
        else {
            prev->next = temp->next;
            delete temp;
            // return;
        }
    }
    void remove_pos(int pos) {
        if (head == NULL) return;
        if (pos == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
        } else {
            Node* temp = head;
            for (int i = 0; i < pos - 1 && temp->next != NULL; i++) {
                temp = temp->next;
            }
            if (temp->next == NULL) {
                return;
            }
            Node* temp2 = temp->next;
            temp->next = temp2->next;
            delete temp2;
        }
    }
    void revers() {
        if (head == NULL) return;
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
};
int main() {
    LinkesList List;
    List.Append(5);
    List.Append(8);
    List.Append(18);
    List.Display();
    cout << "\n";
    List.insert_Pos(6, 0);
    List.insert_Pos(10, 2);
    List.insert_Pos(6, 4);
    List.Display();
    return 0;
}
