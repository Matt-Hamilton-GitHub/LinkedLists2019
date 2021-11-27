#ifndef NUMBER_L_H
#define NUMBER_L_H

#include <iostream>


//The linked list class holds a series of integers.
class NumberList{
private:

struct ListNode{
  int value; //the value in this note
  struct ListNode *next; //to point to the next node 
};
ListNode *head; //list header pointer

public:

NumberList() {head = NULL;}

~NumberList();// destructor that destroys the list. Declared in cpp file

void appendNode(int);//member function for appending nodes.
void insertNode(int);//member function for inserting nodes.
void deleteNode(int);//member function for deleting nodes.
void displayList() const;
};


#endif // NUMBER_L_H
