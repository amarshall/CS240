/**
 * Node.cc
 * CS240 Lab 7
 * @author J. Andrew Marshall (jmarsha6)
 * @author Aaron Shipper (ashippe1)
 */

#include "Node.h"

template <class T>
Node<T>::Node() {
	data = NULL;
	next = NULL;
}

template <class T>
Node<T>::Node(T *dataIn, Node* nextIn) {
	data = dataIn;
	next = nextIn;
}

template <class T>
Node<T>* Node<T>::getNext() {
	return next;
}

template <class T>    
void Node<T>::setNext(Node* nextIn) {
	next = nextIn;
}

template <class T>
T* Node<T>::getData() {
	return data;
}

template <class T>
void Node<T>::setData(T* dataIn) {
	data = dataIn;
}

template <class T>
Node<T>::~Node() {
	if (data != NULL) 
	delete data;
	// Next node is deleted by LinkedList.cpp
}

