/**
 * ListMain.cpp
 * CS240 Lab 5
 * @author J. Andrew Marshall (jmarsha6)
 */

#include "LinkedList.h"
#include "Node.h"

using namespace std;

int main() {
	LinkedList* myList = new LinkedList();

	myList->displayList();

	int *courseList = new int[3];
	courseList[0] = 140;
	courseList[1] = 220;
	courseList[2] = 240;
  
	StudentRecord *sr = new StudentRecord(111, 3.11, courseList, 3);
	myList->insertLastNode(sr);

	StudentRecord *sr2 = new StudentRecord(222, 3.22, courseList, 3);
	myList->insertLastNode(sr2);

	StudentRecord *sr3 = new StudentRecord(333, 3.333, courseList, 3);
	myList->insertLastNode(sr3);

	StudentRecord *sr4 = new StudentRecord(444, 3.44, courseList, 3);
	myList->insertLastNode(sr4);

	myList->displayList();

	myList->removeFirstNode();

	myList->displayList();
	
	delete myList;
}

