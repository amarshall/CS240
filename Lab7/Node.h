/**
 * Node.h
 * CS240 Lab 7
 * @author J. Andrew Marshall (jmarsha6)
 * @author Aaron Shipper (ashippe1)
 */

#ifndef NODE_H__
#define NODE_H__

#include <string>
//#include "StudentRecord.h"

template <class T>
class Node {
	// note, just for this assignment, to get used to pointer notation
	// for linked lists, the data members of a node have been made public
	// This DOES violate the ADT principles that we have discussed.
	public:
		T *data;
		Node* next;
		
	public:
		Node();
		Node(T *dataIn, Node* nextIn);
		Node *getNext();
		void setNext(Node* nextIn);
		T* getData();
		void setData(T* dataIn);
		~Node();
};

#include "Node.cc"
#endif // NODE_H__

