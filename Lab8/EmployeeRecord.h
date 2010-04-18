/**
 * EmployeeRecord.h
 * CS240 Lab 8
 * @author J. Andrew Marshall (jmarsha6)
 * @author Aaron Shipper (ashippe1)
 */

#ifndef EMPLOYEE_RECORD_H__
#define EMPLOYEE_RECORD_H__

#include <string>

class EmployeeRecord {
	private:
		int employeeID;
		int expYears;
		std::string unitName;
	
	public:
		EmployeeRecord();
		EmployeeRecord(int idIn, int expYearsIn, std::string unitNameIn);
		int getID();
		int getExpYears();
		std::string getUnitName();
		void displayRecord();

};

#endif // EMPLOYEE_RECORD_H__
