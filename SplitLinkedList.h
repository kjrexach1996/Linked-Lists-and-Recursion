// SplitLinkedList.h - specification file for SplitLinkedList class, derived from SinglyLinkedList.

#pragma once
#include "SinglyLinkedList.h"

class SplitLinkedList : public SinglyLinkedList
{
public:
	void splitEvensOdds(SinglyLinkedList& even, SinglyLinkedList& odd)
	{
		Node* current = head;
		while (current != nullptr)
		{
			if (current->data % 2 == 0)
			{
				if (even.getCount() == 0)
					even.setHead(current);
				else
					even.getTail()->next = current;
				even.setTail(current);
				even.incrementCount();
				current = current->next;
				even.getTail()->next = nullptr;
			}
			else
			{
				if (odd.getCount() == 0)
					odd.setHead(current);
				else
					odd.getTail()->next = current;
				odd.setTail(current);
				odd.incrementCount();
				current = current->next;
				odd.getTail()->next = nullptr;
			}
		}
		head = nullptr;
		tail = nullptr;
		counter = 0;
	}
};
