#include <iostream>
#include "linkedlist.h"
using namespace std;

int main()
{
	LinkedList<char> n;

	n.insertHead('c');
	n.insertAt(1, 'a');
	n.insertAt(2, 'r');
	n.displayList();	
	
	cout << endl;
	
	n.insertHead('D');
	n.displayList();
	
	cout << endl;
	
	n.insertNode('u');
	n.removeHead();
	n.displayList();
	
	cout << endl;
	
	n.removeFrom(2);
	cout << n.size() << endl;
	n.displayList();
	
	cout << endl;
	
	n.insertNode('F');
	n.deleteNode('u');
	n.displayList();
	
	cout << endl;
	
	n.update(1, 'N');
	n.update(1, 'M');
	n.update(1, 'O');
	
	n.displayList();
	
	cout << endl;
	
	n.update(2, 'F');
	n.update(2,'t');
	n.redo(2, 1);
	n.redo(3, 1);
	n.displayList();
	
	cout << endl;
	
	n.update(2, 'A');
	n.update(-1, 'B');
	n.displayList();
	
	cout << endl;
		
 	return 0;
}
