/**
 * EmployeeRecord.cpp
 * CS240 Lab 7
 * @author J. Andrew Marshall (jmarsha6)
 * @author Aaron Shipper (ashippe1)
 */

#include "EmployeeRecord.h"
#include <iostream>

using namespace std;

EmployeeRecord::EmployeeRecord() {
	employeeID = 0;
	expYears = 0;
	unitName = "";
}


EmployeeRecord::EmployeeRecord(int idIn, int expYearsIn, string unitNameIn) {
	employeeID = idIn;
	expYears = expYearsIn;
	unitName = unitNameIn;
}

int EmployeeRecord::getID() {
	return employeeID;
}

int EmployeeRecord::getExpYears() {
	return expYears;
}

void EmployeeRecord::displayRecord() {
	cout << "--------Employee-RECORD-" << endl;
	cout << "ID: " << employeeID << endl;
	cout << "Exp. Years: " << expYears << endl;
	cout << "Unit: " << unitName << endl;
	cout << "---------END-----------" << endl << endl;
}

