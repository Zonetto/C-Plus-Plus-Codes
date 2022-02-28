#include <iostream>
#include<cctype>
class DoublyLinkedList{
private:
	struct Node{
		int data;
		Node* next;
		Node* prev;

		Node(){
			next = nullptr;
			prev = nullptr;
		}
	};
	Node* head = nullptr;
public:
	void append(int val){
		Node* newNode = new Node;
		newNode->data = val;
		if (head == nullptr){
			head = newNode;
		}
		else{
			Node* temp = head;
			while (temp->next != nullptr){
				temp = temp->next;
			}
			temp->next = newNode;
			newNode->prev = temp;
		}
	}

	void insert_at_pos(int val, int pos){
		Node* newNode = new Node;
		newNode->data = val;
		if (head == nullptr){//
			head = newNode;
			return;
		}//
		if (pos == 0){
			newNode->next = head;
			head->prev = newNode;
			head = newNode;
			return;
		}

		Node* temp = head;
		for (int i = 0; i < pos && temp != nullptr; i++){
			temp = temp->next;
		}

		if (temp == nullptr){
			this->append(val);
			return;
		}

		newNode->prev = temp->prev;
		temp->prev->next = newNode;
		temp->prev = newNode;
		newNode->next = temp;
	}

	void remove(int val){
		if (head == nullptr)
			return;

		Node* temp;
		temp = head;

		if (temp->data == val){
			head = temp->next;
			if (head != nullptr)
				head->prev = nullptr;
			delete temp;
			return;
		}

		while (temp != nullptr && temp->data != val){
			temp = temp->next;
		}

		if (temp == nullptr){
			return;
		}
		else{
			temp->prev->next = temp->next;
			if (temp->next != nullptr)
				temp->next->prev = temp->prev;
			delete temp;
		}
	}

	void remove_at_pos(int pos){
		if (head == nullptr)
			return;

		Node* temp = head;
		if (pos == 0){
			head = temp->next;
			if (head)
				head->prev = nullptr;
			delete temp;
			return;
		}

		for (int i = 0; i < pos && temp != nullptr; i++)
			temp = temp->next;

		if (temp == nullptr)
			return;

		temp->prev->next = temp->next;
		if (temp->next)
			temp->next->prev = temp->prev;
		delete temp;

	}

	void display(){
		Node* temp = head;
		while (temp != nullptr){
			std::cout << temp->data << " ";
			temp = temp->next;
		}
		std::cout << std::endl;

	}

	void reverse_display(){
		Node* temp = head;
		while (temp->next != nullptr){
			temp = temp->next;
		}
		//---------------------------
		while (temp != nullptr){
			std::cout << temp->data << " ";
			temp = temp->prev;
		}
		std::cout << std::endl;

	}

	~DoublyLinkedList(){
		Node* temp = head;
		while (head != nullptr){
			head = head->next;
			delete temp;
			temp = head;
		}
	}
};
int main(){
DoublyLinkedList Dlist;
Dlist.append(5);
Dlist.display();
}