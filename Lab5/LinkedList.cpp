/**
 * LinkedList.cpp
 * CS240 Lab 5
 * @author J. Andrew Marshall (jmarsha6)
 */

#include "LinkedList.h"

using namespace std;

/* Empty constructor, initializes private data to NULL */
LinkedList::LinkedList() {
	first = NULL;
}

/**
 * Inserts a new Node at the end of the list
 *
 * @param The StudentRecord to put in the new Node
 */
void LinkedList::insertLastNode(StudentRecord* srIn) {
	if(first != NULL) {
		Node * tmp;
		for(tmp=first; tmp->next != NULL; tmp=tmp->next);
		tmp->next = new Node(srIn, NULL);
	} else {
		first = new Node(srIn, NULL);
	}
}

/* Removes the Node at the beggining of the list */
void LinkedList::removeFirstNode() {
	Node * tmp = first->next;
	delete first;
	first = tmp;
}

/* Prints to stdout the contents of the list */
void LinkedList::displayList() {
	for(Node * tmp=first; tmp != NULL; tmp=tmp->next) {
		displayStudentRecord(tmp->data);
	}
}

/* Destructor, deletes all Nodes in the list */
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
	cout << "ID:" << studentRecord->getID() << " GPA:" << studentRecord->getGPA() << endl;
	cout << studentRecord->getNumOfCourses() << " courses:" << endl;
	for(int i=0; i < studentRecord->getNumOfCourses(); i++) {
		cout << (studentRecord->getCourseList())[i] << endl;
	}
	cout << endl;
}
