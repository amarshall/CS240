/**
 * Node.cc
 * CS240 Lab 8
 * @author J. Andrew Marshall (jmarsha6)
 * @author Aaron Shipper (ashippe1)
 */

#include "Node.h"

/* Empty constructor, initializes private data to NULL */
template <class T>
Node<T>::Node() {
	data = NULL;
	next = NULL;
	prev = NULL;
}

/**
* Explicit value constructor
*
* @param *dataIn The object the new Node will contain
* @param *nextIn Pointer to the Node after the new Node
* @param *prevIn Pointer to the Node before the new Node
*/
template <class T>
Node<T>::Node(T *dataIn, Node* nextIn, Node* prevIn) {
	data = dataIn;
	next = nextIn;
	prev = prevIn;
}

/* @returns Pointer to the node after this */
template <class T>
Node<T>* Node<T>::getNext() {
	return next;
}

/* @param *nextIn Node that follows this one */
template <class T>    
void Node<T>::setNext(Node* nextIn) {
	next = nextIn;
}

/* @returns Pointer to the node before this */
template <class T>
Node<T>* Node<T>::getPrev() {
	return prev;
}

/* @param *nextIn Node that precedes this one */
template <class T>    
void Node<T>::setPrev(Node* prevIn) {
	prev = prevIn;
}

/* @returns the object this Node contains */
template <class T>
T* Node<T>::getData() {
	return data;
}

/* @param *dataIn The object that the Node should now contain */
template <class T>
void Node<T>::setData(T* dataIn) {
	data = dataIn;
}

/* Destructor, deletes the object contained within the Node */
template <class T>
Node<T>::~Node() {
	if (data != NULL) 
	delete data;
	// Next node is deleted by LinkedList.cpp
}
