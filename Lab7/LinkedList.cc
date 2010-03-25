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
	Node<T> * newNode = new Node<T>(recordIn, NULL);
	
	if(first != NULL) {
		Node<T> * tmp;
		for(tmp=first; tmp->next != NULL; tmp=tmp->next);
		tmp->next = newNode;
	} else {
		first = newNode;
	}

}

template <class T>
void LinkedList<T>::removeFirstNode() {
	Node<T> * tmp = first->next;
	delete first;
	first = tmp;
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
	if(first != NULL) {
		Node<T> * tmp = first;
		while(tmp != NULL) {
			Node<T> * next = tmp->next;
			delete tmp;
			tmp = next;
		}
	}
}

