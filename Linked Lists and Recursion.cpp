// Linked List and Recursion.cpp : This file will test the functionality of the 
// SinglyLinkedList class by producing a forward and backward singly linked list
// while demonstrating how to delete various nodes in the list. 

#include "SplitLinkedList.h"
#include <iostream>

int main()
{
    //Construction of forward singly linked list
    SinglyLinkedList myList1;

    //Demonstration of building a forward list
    cout << "Building a forward list" << endl;
    for (int i = 1; i <= 5; i++)
    {
        myList1.insertAtEnd(i * 10);
    }
    myList1.display();

    //Delete the first node of the list
    cout << "Delete the first node" << endl;
    myList1.deleteValue(10);
    myList1.display();

    //Delete the last node of the list
    cout << "Delete the last node" << endl;
    myList1.deleteValue(50);
    myList1.display();

    //Delete the middle node of the list
    cout << "Delete the middle node" << endl;
    myList1.deleteValue(30);
    myList1.display();

    //Construction of backward singly linked list
    SinglyLinkedList myList2;

    //Demonstration of building a backward list
    cout << "Building a backward list" << endl;
    for (int i = 1; i <= 5; i++)
    {
        myList2.insertAtBeginning(i * 10);
    }
    myList2.display();

    //Delete the first node of the list
    cout << "Delete the first node" << endl;
    myList2.deleteValue(50);
    myList2.display();

    //Delete the last node of the list
    cout << "Delete the last node" << endl;
    myList2.deleteValue(10);
    myList2.display();

    //Delete the middle node of the list
    cout << "Delete the middle node" << endl;
    myList2.deleteValue(30);
    myList2.display();

    cout << endl;

    //Making a SplitLinkedList
    SplitLinkedList myEvenList;
    SplitLinkedList myOddList;
    SplitLinkedList mySplitList;

    //Before splitting list
    cout << "list";
    mySplitList.display();

    int check = 0;
    cout << "Please enter numbers to add to the list. When finished, enter -999: " << endl;
    while (check != -999)
    {
        cin >> check;
        if (check == -999)
            mySplitList.splitEvensOdds(myEvenList, myOddList);
        else
            mySplitList.insertAtEnd(check);
    }
    //After splitting list
    cout << "evenList";
    myEvenList.display();

    cout << "oddList";
    myOddList.display();

    cout << "list";
    mySplitList.display();
};
