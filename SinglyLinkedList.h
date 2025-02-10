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
protected:
	Node* head; // Pointer to the first node
	Node* tail; // Pointer to the last node
	int counter; // Keeps track of number of nodes in list
public:
	SinglyLinkedList() : head(nullptr), tail(nullptr), counter(0) {} // Constructor initializes
	//the head to nullptr
		// Function to insert a node at the beginning
	void insertAtBeginning(int value) {
		Node* newNode = new Node(value);
		counter++;
		if (!head)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			newNode->next = head;
			head = newNode;
		}
	}
	// Function to insert a node at the end
	void insertAtEnd(int value) {
		Node* newNode = new Node(value);
		counter++;
		if (!head)
		{
			head = newNode;
			tail = newNode;
			return;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
	}
	// Function to delete the first occurrence of a value
	void deleteValue(int value) {
		if (!head) return;
		if (head->data == value) {
			Node* toDelete = head;
			head = head->next;
			if (!head)
				tail = nullptr;
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
			if (temp->next == nullptr)
				tail = temp;
			delete toDelete;
		}
		counter--;
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

	int getCount()
	{
		return counter;
	}

	void incrementCount()
	{
		counter++;
	}

	Node* getHead()
	{
		return head;
	}

	Node* getTail()
	{
		return tail;
	}

	void setHead(Node* updateHead)
	{
		head = updateHead;
	}

	void setTail(Node* updateTail)
	{
		tail = updateTail;
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
