/**
 * CS240 Lab 9
 * TreeNode.cpp
 * @author J. Andrew Marshall (jmarsha6)
 * @author Ahmet Iscen (aiscen1)
 */

#include "TreeNode.h"

using namespace std;

TreeNode::TreeNode() {
	data = NULL;
	lesserNode = NULL;
	greaterNode = NULL;
}

TreeNode::TreeNode(int d) {
	data = d;
	lesserNode = NULL;
	greaterNode = NULL;
}

TreeNode* TreeNode::getLesser() {
	return lesserNode;
}

TreeNode* TreeNode::getGreater() {
	return greaterNode;
}

int TreeNode::getData() {
	return data;
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
