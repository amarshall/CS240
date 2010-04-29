/**
 * CS240 Lab 10
 * TreeNode.cpp
 * @author J. Andrew Marshall (jmarsha6)
 * @author Aaron Shipper (ashippe1)
 * @author Kenneth Louie (klouie1)
 */

#include "TreeNode.h"

using namespace std;

TreeNode::TreeNode() {
	word = NULL;
	frequency = 0;
	lesserNode = NULL;
	greaterNode = NULL;
}

TreeNode::TreeNode(string q) {
	word = w;
	frequency = 1;
	lesserNode = NULL;
	greaterNode = NULL;
}

TreeNode* TreeNode::getLesser() {
	return lesserNode;
}

TreeNode* TreeNode::getGreater() {
	return greaterNode;
}

int TreeNode::getWord() {
	return word;
}

int TreeNode::getFrequency() {
	return frequency;
}

void increaseFrequency() {
	frequency++;
}

void TreeNode::setLesser(TreeNode *node) {
	if(lesserNode == NULL) {
		lesserNode = node;
	} else {
		cerr << "Cannot set child node if it already exists!" << endl;
	}
}

void TreeNode::setGreater(TreeNode *node) {
	if(greaterNode == NULL) {
		greaterNode = node;
	} else {
		cerr << "Cannot set child node if it already exists!" << endl;
	}
}

/* Destructor */
TreeNode::~TreeNode() {
	delete lesserNode;
	delete greaterNode;
}
