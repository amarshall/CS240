/**
 * EmployeeRecord.cpp
 * CS240 Lab 7
 * @author J. Andrew Marshall (jmarsha6)
 * @author Aaron Shipper (ashippe1)
 */

#include "EmployeeRecord.h"
#include <iostream>

using namespace std;

/* Empty constructor, initializes private data to zero */
EmployeeRecord::EmployeeRecord() {
	employeeID = 0;
	expYears = 0;
	unitName = "";
}

/**
 * Explicit value constructor
 *
 * @param idIn The employees's ID
 * @param expYearsIn The employee's Exp Years
 * @param stringUnitNameIn The employee's unitName
 */
EmployeeRecord::EmployeeRecord(int idIn, int expYearsIn, string unitNameIn) {
	employeeID = idIn;
	expYears = expYearsIn;
	unitName = unitNameIn;
}

/* @returns The employee's ID */
int EmployeeRecord::getID() {
	return employeeID;
}

/* @returns The employee's Exp Years */
int EmployeeRecord::getExpYears() {
	return expYears;
}

/* Displays employee data */
void EmployeeRecord::displayRecord() {
	cout << "--------Employee-RECORD-" << endl;
	cout << "ID: " << employeeID << endl;
	cout << "Exp. Years: " << expYears << endl;
	cout << "Unit: " << unitName << endl;
	cout << "---------END-----------" << endl << endl;
}

