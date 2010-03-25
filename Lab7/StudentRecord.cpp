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
	studentID = 0;
	studentGPA = 0;
	numOfCourses = 0;
	courseList = 0;
}

StudentRecord::StudentRecord(int idIn, double gpaIn, int *courseListIn, int numOfCoursesIn) {
	studentID = idIn;
	studentGPA = gpaIn;
	numOfCourses = numOfCoursesIn;
	if(numOfCourses == 0) {
		courseList = 0;
	} else {
		courseList = new int[numOfCourses];
		for(int i=0; i<numOfCourses; i++) {
			courseList[i] = courseListIn[i];
		}
	}

}

int StudentRecord::getID() {
	return studentID;
}

double StudentRecord::getGPA() {
	return studentGPA;
}

int StudentRecord::getNumOfCourses() {
	return numOfCourses;
}

int* StudentRecord::getCourseList() {
	return courseList;
}

void StudentRecord::displayRecord() {
	cout << "--------STUDENT-RECORD-" << endl;
	cout << "ID: " << studentID << endl;
	cout << "GPA: " << studentGPA << endl;
	cout << "Courses:" << endl;
	for(int i=0; i < numOfCourses; i++) {
		cout << courseList[i] << endl;
	}
	cout << "---------END-----------" << endl << endl;
}

StudentRecord::~StudentRecord() {
	delete courseList;
}

