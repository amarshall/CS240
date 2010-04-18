/**
 * StudentRecord.cpp
 * CS240 Lab 8
 * @author J. Andrew Marshall (jmarsha6)
 * @author Aaron Shipper (ashippe1)
 */

#include "StudentRecord.h"
#include <iostream>

using namespace std;

/* Empty constructor, initializes private data to zero */
StudentRecord::StudentRecord() {
	studentID = 0;
	studentGPA = 0;
	numOfCourses = 0;
	courseList = 0;
}

/**
* Explicit value constructor
*
* @param idIn The student's ID
* @param gpaIn The student's GPA
* @param courseListIn Pointer to an int array of the student's course list
* @param numOfCoursesIn The number of courses in the passed array
*/
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

/* @returns The student's ID */
int StudentRecord::getID() {
	return studentID;
}

/* @returns The student's GPA */
double StudentRecord::getGPA() {
	return studentGPA;
}

/* @returns The number of courses the student is enrolled in */
int StudentRecord::getNumOfCourses() {
	return numOfCourses;
}

/* @returns An int array of the student's courses */
int* StudentRecord::getCourseList() {
	return courseList;
}

/* Displays student data */
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

/* Destructor */
StudentRecord::~StudentRecord() {
	delete[] courseList;
}
