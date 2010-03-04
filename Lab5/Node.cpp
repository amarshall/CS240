/**
 * Node.cpp
 * CS240 Lab 5
 * @author J. Andrew Marshall (jmarsha6)
 */

#include "Node.h"

Node::Node() {
	data = NULL;
	next = NULL;
}

Node::Node(StudentRecord *dataIn, Node* nextIn) {
	data = dataIn;
	next = nextIn;
}

Node* Node::getNext() {
	return next;
}
    
void Node::setNext(Node* nextIn) {
	next = nextIn;
}

StudentRecord* Node::getData() {
	return data;
}

void Node::setData(StudentRecord* dataIn) {
	data = dataIn;
}

Node::~Node() {
	if(data != NULL) {
		delete data;
	}
	//Next pointer is deleted by LinkedList.cpp
}

