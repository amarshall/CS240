/**
 * Node.h
 * CS240 Lab 5
 * @author J. Andrew Marshall (jmarsha6)
 */

#ifndef NODE_H__
#define NODE_H__

#include <string>
#include "StudentRecord.h"

class Node {
	// note, just for this assignment, to allow pointer notation
	// for linked lists, the data members of a node have been made public
	// This DOES violate the ADT principles that we have discussed.
 	public:
		StudentRecord *data;
		Node* next;
	
	public:
		Node();
		Node(StudentRecord *dataIn, Node* nextIn);
		Node *getNext();
		void setNext(Node* nextIn);
		StudentRecord* getData();
		void setData(StudentRecord* dataIn);
		~Node();
};

#endif // NODE_H__

