// Linked List and Recursion.cpp : This file will test the functionality of the 
// SplitLinkedList class by taking the elements of a linked list and splitting
// them into two new linked lists, containing even and odd numbers, respectively.
// The original list will be emptied.

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
    while (check != -999)
    {
        cin >> check;
        if (check == -999)
        {
            cout << "List before splitting" << endl;
            cout << "list";
            mySplitList.display(); //Display original list
            mySplitList.splitEvensOdds(myEvenList, myOddList); //Splits list into two
            cout << endl;
        }
        else
            mySplitList.insertAtEnd(check); //Adds value to list
    }

    //After splitting list
    cout << "Lists after splitting" << endl;

    cout << "evenList"; 
    myEvenList.display(); //Display even list

    cout << "oddList";
    myOddList.display(); //Display odd list

    cout << "list";
    mySplitList.display(); //Display original list
};
