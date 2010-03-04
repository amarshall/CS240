/**
 * LinkedList.cpp
 * CS240 Lab 5
 * @author J. Andrew Marshall (jmarsha6)
 */

#include "LinkedList.h"

LinkedList::LinkedList() {
	first = NULL;
}

void LinkedList::insertLastNode(StudentRecord* srIn) {
	if(first != NULL) {
		Node * tmp;
		for(tmp=first; tmp->next != NULL; tmp=tmp->next);
		tmp->next = new Node(srIn, NULL);
	} else {
		first = new Node(srIn, NULL);
	}
}

void LinkedList::removeFirstNode() {
	Node * tmp = first->next;
	delete first;
	first = tmp;
}

void LinkedList::displayList() {
	
}

LinkedList::~LinkedList() {
	if(first != NULL) {
		Node * tmp = first;
		while(tmp != NULL) {
			Node * next = tmp->next;
			delete tmp;
			tmp = next;
		}
	}
}


void LinkedList::displayStudentRecord(StudentRecord* studentRecord) {

}

