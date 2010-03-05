/**
 * StudentRecord.cpp
 * CS240 Lab 5
 * @author J. Andrew Marshall (jmarsha6)
 */

#include "StudentRecord.h"

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

StudentRecord::~StudentRecord() {
	// FIXME: write code to delete the data member that was dynamically allocated
}
