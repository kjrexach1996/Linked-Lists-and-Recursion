// SplitLinkedList.h - specification file for SplitLinkedList class, derived from SinglyLinkedList.

#pragma once
#include "SinglyLinkedList.h"

class SplitLinkedList : public SinglyLinkedList
{
public:
	void splitEvensOdds(SplitLinkedList& even, SplitLinkedList& odd)
	{
		Node* current = head;
		while (current != nullptr)
		{
			if (current->data % 2 == 0)
			{
				if (even.counter == 0)
					even.head = current;
				else
					even.tail->next = current;
				even.tail = current;
				even.counter++;
				current = current->next;
				even.tail->next = nullptr;
			}
			else
			{
				if (odd.counter == 0)
					odd.head = current;
				else
					odd.tail->next = current;
				odd.tail = current;
				odd.counter++;
				current = current->next;
				odd.tail->next = nullptr;
			}
		}
		head = nullptr;
		tail = nullptr;
		counter = 0;
	}
};
