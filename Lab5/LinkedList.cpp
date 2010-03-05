/**
 * LinkedList.cpp
 * CS240 Lab 5
 * @author J. Andrew Marshall (jmarsha6)
 */

#include "LinkedList.h"

using namespace std;

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
	for(Node * tmp=first; tmp != NULL; tmp=tmp->next) {
		displayStudentRecord(tmp->data);
	}
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
	cout << "ID:" << studentRecord->getID() << " GPA:" << studentRecord->getGPA() << endl;
	cout << studentRecord->getNumOfCourses() << " courses:" << endl;
	for(int i=0; i < studentRecord->getNumOfCourses(); i++) {
		cout << (studentRecord->getCourseList())[i] << endl;
	}
	cout << endl;
}
