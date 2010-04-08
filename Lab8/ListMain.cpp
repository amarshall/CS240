/**
 * ListMain.cpp
 * CS240 Lab 8
 * @author J. Andrew Marshall (jmarsha6)
 * @author Aaron Shipper (ashippe1)
 */

#include "LinkedList.h"
#include "Node.h"
#include "StudentRecord.h"
#include "EmployeeRecord.h"

void driverStudentRecord() {
	LinkedList<StudentRecord>  *myList = new LinkedList<StudentRecord>();
	myList->displayList();
	
	int *courseList = new int[3];
	courseList[0] = 140;
	courseList[1] = 220;
	courseList[2] = 240;
	  
	myList->insertLastNode(new StudentRecord(111, 3.11, courseList, 3));
	myList->insertLastNode(new StudentRecord(222, 3.22, courseList, 3));
	myList->displayList();
	myList->removeSecondNode();
	myList->displayList();
	myList->removeSecondNode();
	myList->displayList();
	myList->removeFirstNode();
	myList->displayList();
	myList->removeFirstNode();
	myList->displayList();
	myList->insertLastNode(new StudentRecord(111, 3.11, courseList, 3));
	myList->insertLastNode(new StudentRecord(222, 3.22, courseList, 3));
	myList->insertLastNode(new StudentRecord(333, 3.333, courseList, 3));
	myList->insertLastNode(new StudentRecord(444, 3.44, courseList, 3));
	myList->insertLastNode(new StudentRecord(555, 1.0, NULL, 0));
	myList->displayList();
	delete myList;
}

int main () {
	driverStudentRecord();
}

