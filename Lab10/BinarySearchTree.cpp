/**
 * CS240 Lab 10
 * BinarySearchNode.cpp
 * @author J. Andrew Marshall (jmarsha6)
 * @author Aaron Shipper (ashippe1)
 * @author Kenneth Louie (klouie1)
 */

#include "BinarySearchTree.h"

using namespace std;

/* Default constructor */
BinarySearchTree::BinarySearchTree() {
	root = NULL;
	string filename = "errorLogFile.txt";
	errorLog.open(filename.data());
}

/**
 * Searches the tree for the given data.
 * @param elem The data to search for.
 * @return True if the data was found in the tree, else false.
 */
TreeNode* BinarySearchTree::search(string elem) const {
	return searchHelper(root, elem);
}

/**
 * Searches for the given element into the tree.
 * @param elem The data to insert.
 * @return If the insertion was successful.
 */
bool BinarySearchTree::insert(string elem) {
	if(root == NULL) {
		root = new TreeNode(elem);
		return true;
	} else {
		return insertHelper(root, elem);
	}
}

/**
 * Traverses the entire tree, in order, and prints out all the data.
 */
void BinarySearchTree::traverseInOrder() {
	traversalHelper(root);
}

/**
 * Private method that recursively searches for the given data starting at the
 * given node in the tree.
 * @param node The node to begin the traversal at.
 * @param elem The data to search for.
 * @return True if the data was found, else false.
 */
TreeNode* BinarySearchTree::searchHelper(TreeNode *node, string elem) const {
	if(node == NULL) {
		return NULL;
	} else if(elem.compare(node->getWord()) < 0) {
		return searchHelper(node->getLesser(), elem);
	} else if(elem.compare(node->getWord()) > 0) {
		return searchHelper(node->getGreater(), elem);
	} else {
		return node;
	}
}

/**
 * Private method that recursively inserts the new data starting at the given
 * node in the tree.
 * @param node The node to begin the traversal at.
 * @param elem The new data to insert.
 * @return False if the new element could not be inserted.
 */
bool BinarySearchTree::insertHelper(TreeNode *node, string elem) {
	if(node->getWord() == elem) {
		errorLog << "Cannot insert duplicate value: " << elem << endl;
		node->increaseFrequency();
		return false;
	} else if(elem.compare(node->getWord()) < 0) {
		if(node->getLesser() == NULL) {
			node->setLesser(new TreeNode(elem));
		} else {
			return insertHelper(node->getLesser(), elem);
		}
	} else if(elem.compare(node->getWord()) > 0) {
		if(node->getGreater() == NULL) {
			node->setGreater(new TreeNode(elem));
		} else {
			return insertHelper(node->getGreater(), elem);
		}
	}
	return true;
}

/**
 * Private method to recursively traverse the tree, in order, and print out all
 * the data within.
 * @param node The node to begin the traversal at.
 */
void BinarySearchTree::traversalHelper(TreeNode *node) {
	if(node != NULL) {
		traversalHelper(node->getLesser());
		cout << node->getWord() << endl;
		traversalHelper(node->getGreater());
	}
}

void BinarySearchTree::printWordFrequency(string findString) {
	TreeNode* cur = search(findString);
	if(cur != NULL) {
		cout << "The frequency of \"" << findString << "\" is: " << cur->getFrequency() << endl;
	} else {
		cout << "Specified word \"" << findString << "\" not found" << endl;
	}
}


/* Destructor */
BinarySearchTree::~BinarySearchTree() {
	errorLog.close();
	delete root;
}
