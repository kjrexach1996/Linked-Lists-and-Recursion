// Linked List and Recursion.cpp : This file will test the functionality of the 
// SinglyLinkedList class by producing a forward and backward singly linked list
// while demonstrating how to delete various nodes in the list. 

#include "SplitLinkedList.h"
#include <iostream>

int main()
{
    //Testing displaying a list in reverse
    SinglyLinkedList myReverseList;
    for (int i = 1; i <= 20; i++)
    {
        myReverseList.insertAtEnd(i);
    }
    //Print list normally
    myReverseList.display();
    cout << endl;

    //Print list in reverse
    myReverseList.displayInReverse();
    cout << endl;
};
