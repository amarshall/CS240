/**
 * StudentRecord.h
 * CS240 Lab 8
 * @author J. Andrew Marshall (jmarsha6)
 * @author Aaron Shipper (ashippe1)
 */

#ifndef STUDENT_RECORD_H__
#define STUDENT_RECORD_H__

class StudentRecord {
	private:
		int studentID;
		double studentGPA;
		int *courseList;
		int numOfCourses;
		
	public:
		StudentRecord();
		~StudentRecord();
		StudentRecord(int idIn, double gpaIn, int* courseListIn, int numOfCoursesIn);
		int getID();
		double getGPA();
		int* getCourseList();
		int getNumOfCourses();
		void displayRecord();
};

#endif // STUDENT_RECORD_H__

