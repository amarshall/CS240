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
  
	myList->insertLastNode(new StudentRecord(111, 3.11, courseList, 3));
	myList->insertLastNode(new StudentRecord(222, 3.22, courseList, 3));
	myList->insertLastNode(new StudentRecord(333, 3.333, courseList, 3));
	myList->insertLastNode(new StudentRecord(444, 3.44, courseList, 3));
	myList->insertLastNode(new StudentRecord(555, 1.0, NULL, 0));
	myList->displayList();
	myList->removeFirstNode();
	cout << "-------------------------------------------" << endl;
	myList->displayList();
	delete myList;
	
	cout << "-------------------------------------------" << endl;
	myList = new LinkedList();
	myList->displayList();
	myList->insertLastNode(new StudentRecord(555, 1.0, NULL, 0));
	cout << "-------------------------------------------" << endl;
	myList->displayList();
	
	delete myList;
}

