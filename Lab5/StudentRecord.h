/**
 * StudentRecord.h
 * CS240 Lab 5
 * @author J. Andrew Marshall (jmarsha6)
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
		StudentRecord(int idIn, double gpaIn, int *courseListIn, int numOfCoursesIn);
		~StudentRecord();
		int getID();
		double getGPA();
		int *getCourseList();
		int getNumOfCourses();
};

#endif // STUDENT_RECORD_H__

