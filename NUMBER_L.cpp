#include "NUMBER_L.h"
#include <iostream>
using namespace std;


void NumberList::appendNode(int num){
    ListNode *newNode;//points to a new node
    ListNode *nodePtr;//move through the list
    
    //Allocate a new mode and store data num there
    
    newNode = new ListNode;//declare a new mode as an object
    newNode -> value = num;//assigne the value
    newNode-> next = NULL;//assigne next equals to NULL
    
    if(!head)//if there are no nodes in the list
        head = newNode;
    else//otherwise, insert new node at the end
    {
        //initialize nodePtr to head of list
        nodePtr = head;
        
        //find the last node in the list
        while(nodePtr->next)
            nodePtr = nodePtr->next;
            
        //Insert newNode as the last node
        nodePtr->next = newNode;
        
        
    }
}

void NumberList::insertNode(int num){
    
    ListNode *newNode;
    ListNode *nodePtr;
    ListNode *previousNode = NULL;
    
    newNode = new ListNode;
    newNode->value = num;
    
    if(!head){
        head = newNode;
        newNode->next = NULL;
    }else{
        nodePtr = head;
        
        previousNode = NULL;
        
        while(nodePtr != NULL && nodePtr->value < num ){
            previousNode =nodePtr;
            nodePtr = nodePtr->next;
        }
        
        if(previousNode == NULL){
            head = newNode;
            newNode->next = nodePtr;
        }else{
            previousNode->next = newNode;
            newNode->next = nodePtr;
        }
    }
}

void NumberList::displayList()const{
    ListNode *nodePtr;
    
    nodePtr = head;
    
    cout << "[ ";
    while(nodePtr){
        
        cout << nodePtr->value << " ";
        
        nodePtr = nodePtr->next;
    }
    cout << "]" << endl;
}

void NumberList::deleteNode(int num){
    
    ListNode *nodePtr;
    ListNode *previousNode;
    
    if(!head) 
        return;
        
    if(head->value == num){
        nodePtr = head->next;
        delete head;
        head = nodePtr;
    }
    else{
        nodePtr = head;
        
        while(nodePtr != NULL && nodePtr->value != num){
            previousNode =nodePtr;
            nodePtr = nodePtr->next;
        }
        
        if(nodePtr){
            previousNode ->next = nodePtr->next;
            delete nodePtr;
        }
    }
    
}

NumberList::~NumberList(){
    
    ListNode *nodePtr;
    ListNode *nextNode;
    
    nodePtr = head;
    
    while(nodePtr != NULL){
        nextNode = nodePtr->next;
        
        delete nodePtr;
        
        nodePtr = nextNode;
    }
    
    cout << "\nThe Linked List Has Been Destroyed..." << endl;
    
}