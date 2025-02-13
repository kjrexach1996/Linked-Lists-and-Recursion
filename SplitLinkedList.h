// SplitLinkedList.h - specification file for SplitLinkedList class, derived from SinglyLinkedList.

#pragma once
#include "SinglyLinkedList.h"

class SplitLinkedList : public SinglyLinkedList
{
public:
	void splitEvensOdds(SplitLinkedList& even, SplitLinkedList& odd)
	{
		Node* current = head; //Creates a new node pointer
		while (current != nullptr)
		{
			if (current->data % 2 == 0) //Checks if value is even
			{
				if (even.counter == 0)
					even.head = current; //Even list head pointer points to current node
				else
					even.tail->next = current; //Last node in even list points to current node
				even.tail = current; //Updates tail pointer
				even.counter++;
				current = current->next; //Moves to next node
				even.tail->next = nullptr;
			}
			else //Value is odd
			{
				if (odd.counter == 0)
					odd.head = current; //odd list head pointer points to current node
				else
					odd.tail->next = current; //Last node in odd list points to current node
				odd.tail = current; //Updates tail pointer
				odd.counter++;
				current = current->next; //Moves to next node
				odd.tail->next = nullptr;
			}
		}
		//Empties original list
		head = nullptr;
		tail = nullptr;
		counter = 0;
	}
};
