/**
 * LinkedList.cc
 * CS240 Lab 7
 * @author J. Andrew Marshall (jmarsha6)
 * @author Aaron Shipper (ashippe1)
 */

#include "LinkedList.h"

using namespace std;

template <class T>
LinkedList<T>::LinkedList() {
	first = NULL;
}


template <class T>
void LinkedList<T>::insertLastNode(T *recordIn) {
	// initially set the next of this node to NULL
	Node<T> *newNode = new Node<T>(recordIn, NULL);

	// FIXME: Add rest of the code to insert the node
}

template <class T>
void LinkedList<T>::removeFirstNode() {
	// FIXME: Add rest of the code to remove the first node
}


template <class T>
void LinkedList<T>::displayList() {
	if (first == NULL) {
		cout << "------Empty List!-------" << endl << endl;
		return;
	}
	
	Node<T>* ptr = first;
	while (ptr != NULL) {
		(ptr->data)->displayRecord();
		ptr = ptr->next;
	}
}

template <class T>
LinkedList<T>::~LinkedList() {
	// first check if the first ptr is null    
	if (first == NULL) {
		return;
	}

	// FIXME: iterate through the linked list and delete each Node
}

