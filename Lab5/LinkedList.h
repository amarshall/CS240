/**
 * LinkedList.h
 * CS240 Lab 5
 * @author J. Andrew Marshall (jmarsha6)
 */

#ifndef LINKED_LIST_H__
#define LINKED_LIST_H__

#include <iostream>
#include <string>
#include "Node.h"

class LinkedList {
	private:
		Node* first;
		void displayStudentRecord(StudentRecord* studentRecord);  

	public:
		LinkedList();
		void insertLastNode(StudentRecord* srIn);
		void removeFirstNode();
		void displayList();
		~LinkedList();
};

#endif // LINKED_LIST_H__

