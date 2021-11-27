 //
#include "NUMBER_L.h"

#include <iostream>
using namespace std;




int main()
{
    NumberList list;
    
    list.appendNode(1);
    list.appendNode(2);
    list.appendNode(7);
    list.appendNode(12);
    
    cout << "Here is the initial linked list -> ";
    list.displayList();
    cout << endl << endl;
    
    
    
    list.insertNode(10);
    list.insertNode(14);
    
    cout << "Now inserting values 10 and 14" << endl;
    cout << "Here are the nodes now -> ";
    list.displayList();
    cout << endl << endl;
    

    list.deleteNode(14);
    cout << "Now deleting the last node (14)." << endl;
    cout << "Here are the nodes left -> ";
    list.displayList();
    cout << endl << endl;
    
    
    
	system("pause");
    
	return 0;
}
