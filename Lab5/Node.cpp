/**
 * Node.cpp
 * CS240 Lab 5
 * @author J. Andrew Marshall (jmarsha6)
 */

#include "Node.h"

using namespace std;

/* Empty constructor, initializes private data to NULL */
Node::Node() {
	data = NULL;
	next = NULL;
}

/**
 * Explicit value constructor
 *
 * @param *dataIn The StudentRecord the new Node will contain
 * @param *nextIn Pointer to the Node after the new Node
 */
Node::Node(StudentRecord *dataIn, Node* nextIn) {
	data = dataIn;
	next = nextIn;
}

/* @returns Pointer to the node after this */
Node* Node::getNext() {
	return next;
}

/* @param *nextIn Node that follows this one */
void Node::setNext(Node* nextIn) {
	next = nextIn;
}

/* @returns the StudentRecord this Node contains */
StudentRecord* Node::getData() {
	return data;
}

/* @param *dataIn The StudentRecord that the Node should now contain */
void Node::setData(StudentRecord* dataIn) {
	data = dataIn;
}

/* Destructor, deletes the StudentRecord contained within the Node */
Node::~Node() {
	if(data != NULL) {
		delete data;
	}
	// Next pointer is deleted by LinkedList.cpp
}

