/**
 * StudentRecord.cpp
 * CS240 Lab 7
 * @author J. Andrew Marshall (jmarsha6)
 * @author Aaron Shipper (ashippe1)
 */

#include "StudentRecord.h"
#include <iostream>

using namespace std;

StudentRecord::StudentRecord() {
	// FIXME: default values 
}

StudentRecord::StudentRecord(int idIn, double gpaIn, int *courseListIn, int numOfCoursesIn) {
	// FIXME: set the appropriate values
}

int StudentRecord::getID() {
	// FIXME
}

double StudentRecord::getGPA() {
	// FIXME
}

int StudentRecord::getNumOfCourses() {
	// FIXME
}

int* StudentRecord::getCourseList() {
	// FIXME
}

void StudentRecord::displayRecord() {
	cout << "--------STUDENT-RECORD-" << endl;
	// FIXME: print each data member
	cout << "---------END-----------" << endl << endl;
}

StudentRecord::~StudentRecord() {
	// FIXME
}

