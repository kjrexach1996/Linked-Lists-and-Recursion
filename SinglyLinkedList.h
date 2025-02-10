//SinglyLinkedList.h - implementation and specifications for SinglyLinkedList class,
//provided by instructor. 

#pragma once
#include <iostream>

using namespace std;

struct Node {
	int data; // Data part
	Node* next; // Pointer to the next node
	// Constructor to initialize a node
	Node(int value) : data(value), next(nullptr) {}
};

class SinglyLinkedList {
private:
	Node* head; // Pointer to the first node
public:
	SinglyLinkedList() : head(nullptr) {} // Constructor initializes
	//the head to nullptr
		// Function to insert a node at the beginning
	void insertAtBeginning(int value) {
		Node* newNode = new Node(value);
		newNode->next = head;
		head = newNode;
	}
	// Function to insert a node at the end
	void insertAtEnd(int value) {
		Node* newNode = new Node(value);
		if (!head) {
			head = newNode;
			return;
		}
		Node* temp = head;
		while (temp->next) {
			temp = temp->next;
		}
		temp->next = newNode;
	}
	// Function to delete the first occurrence of a value
	void deleteValue(int value) {
		if (!head) return;
		if (head->data == value) {
			Node* toDelete = head;
			head = head->next;
			delete toDelete;
			return;
		}
		Node* temp = head;
		while (temp->next && temp->next->data != value) {
			temp = temp->next;
		}
		if (temp->next) {
			Node* toDelete = temp->next;
			temp->next = temp->next->next;
			delete toDelete;
		}
	}
	// Function to display the linked list
	void display() {
		Node* temp = head;
		while (temp) {
			cout << temp->data << " -> ";
			temp = temp->next;
		}
		cout << "nullptr\n";
	}
	// Destructor to free memory
	~SinglyLinkedList() {
		Node* temp;
		while (head) {
			temp = head;
			head = head->next;
			delete temp;
		}
	}
};
