// Linked List and Recursion.cpp : This file will test the functionality of the 
// SinglyLinkedList class by producing a forward and backward singly linked list
// while demonstrating how to delete various nodes in the list. 

#include "SplitLinkedList.h"
#include <iostream>

int main()
{
    //Making a SplitLinkedList
    SplitLinkedList myEvenList;
    SplitLinkedList myOddList;
    SplitLinkedList mySplitList;

    //Before splitting list
    int check = 0;
    cout << "Please enter numbers to add to the list. When finished, enter -999: " << endl;
    while (cin >> check)
    {
        if (check == -999)
        {
            cout << "List before splitting" << endl;
            cout << "list";
            mySplitList.display();
            mySplitList.splitEvensOdds(myEvenList, myOddList);
            cout << endl;
        }
        else
            mySplitList.insertAtEnd(check);
    }

    //After splitting list
    cout << "Lists after splitting" << endl;
    cout << "evenList";
    myEvenList.display();

    cout << "oddList";
    myOddList.display();

    cout << "list";
    mySplitList.display();
};
