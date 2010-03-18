/**
 * ListMain.cpp
 * CS240 Lab 7
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
	
	// rest of the driver code should be the same as Lab 5
	
	delete myList;
}

void driverEmployeeRecord() {
	LinkedList<EmployeeRecord>  *myList = new LinkedList<EmployeeRecord>();
	// FIXME: add driver code similar to driverStudentRecord()

	myList->displayList();
	myList->removeFirstNode();
	delete myList;
}

int main () {
	driverStudentRecord();
	driverEmployeeRecord();
}

