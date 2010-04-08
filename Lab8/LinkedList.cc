/**
 * LinkedList.cc
 * CS240 Lab 8
 * @author J. Andrew Marshall (jmarsha6)
 * @author Aaron Shipper (ashippe1)
 */

#include "LinkedList.h"

using namespace std;

/* Empty constructor, initializes private data to NULL */
template <class T>
LinkedList<T>::LinkedList() {
	first = NULL;
	last = NULL;
}

/**
* Inserts a new Node at the end of the list
*
* @param The StudentRecord to put in the new Node
*/
template <class T>
void LinkedList<T>::insertLastNode(T *recordIn) {
	Node<T> * newNode = new Node<T>(recordIn, NULL, last);
	if(first != NULL) {
		last->next = newNode;
	} else {
		first = newNode;
	}
	last = newNode;
}

/* Removes the Node at the beggining of the list */
template <class T>
void LinkedList<T>::removeFirstNode() {
	if(first != NULL) {
		Node<T> * tmp = first->next;
		delete first;
		first = tmp;
	}
}

/* Removes the second Node in the list */
template <class T>
void LinkedList<T>::removeSecondNode() {
	if(first != NULL && first->next != NULL) {
		Node<T> * tmp = first->next->next;
		delete first->next;
		first->next = tmp;
		if(tmp != NULL) {
			tmp->prev = first;
		}
	}
}

/* Prints to stdout the contents of the list */
template <class T>
void LinkedList<T>::displayList() {
	cout << "------BEGIN DISPLAY-----" << endl;
	if (first == NULL) {
		cout << "------Empty List!------" << endl;
	} else {	
		Node<T>* ptr = first;
		while (ptr != NULL) {
			(ptr->data)->displayRecord();
			ptr = ptr->next;
		}
	}
	cout << "------END DISPLAY------" << endl << endl;
}

/* Destructor, deletes all Nodes in the list */
template <class T>
LinkedList<T>::~LinkedList() {
	if(first != NULL) {
		Node<T> * tmp = first;
		while(tmp != NULL) {
			Node<T> * next = tmp->next;
			delete tmp;
			tmp = next;
		}
	}
}

