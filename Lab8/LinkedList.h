/**
 * LinkedList.h
 * CS240 Lab 8
 * @author J. Andrew Marshall (jmarsha6)
 * @author Aaron Shipper (ashippe1)
 */

#ifndef LINKED_LIST_H__
#define LINKED_LIST_H__

#include <iostream>
#include <string>
#include "Node.h"

template <class T>
class LinkedList {
	public:
		LinkedList();
		void insertLastNode(T* srIn);
		void removeFirstNode();
		void removeSecondNode();
		void displayList();
		~LinkedList();
	
	private:
		Node<T>* first;
		Node<T>* last;
		void displayStudentRecord(T* record);
};

#include "LinkedList.cc"
#endif // LINKED_LIST_H__
