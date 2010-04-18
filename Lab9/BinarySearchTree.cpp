/**
 * CS240 Lab 9
 * BinarySearchNode.cpp
 * @author J. Andrew Marshall (jmarsha6)
 * @author Ahmet Iscen (aiscen1)
 */

#include "BinarySearchTree.h"

using namespace std;

/* Default constructor */
BinarySearchTree::BinarySearchTree() {
	root = NULL;
}

/**
 * Searches the tree for the given data.
 * @param elem The data to search for.
 * @return True if the data was found in the tree, else false.
 */
bool BinarySearchTree::search(int elem) const {
	return searchHelper(root, elem);
}

/**
 * Searches for the given element into the tree.
 * @param elem The data to insert.
 * @return If the insertion was successful.
 */
bool BinarySearchTree::insert(int elem) {
	return insertHelper(root, elem);
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
bool BinarySearchTree::searchHelper(TreeNode *node, int elem) const {
	int cur = node->getData();
	if(node == NULL) {
		return false;
	} else if(cur > elem) {
		return searchHelper(node->getLesser(), elem);
	} else if(cur < elem) {
		return searchHelper(node->getGreater(), elem);
	} else {
		return true;
	}
}

/**
 * Private method that recursively inserts the new data starting at the given
 * node in the tree.
 * @param node The node to begin the traversal at.
 * @param elem The new data to insert.
 * @return False if the new element could not be inserted.
 */
bool BinarySearchTree::insertHelper(TreeNode *node, int elem) {
	if(node->getData() == elem) {
		return false;
	} else if(node->getData() > elem) {
		if(node->getLesser() == NULL) {
			node->setLesser(new TreeNode(elem));
		} else {
			return insertHelper(node->getLesser(), elem);
		}
	} else if(node->getData() > elem) {
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
		cout << node->getData() << endl;
		traversalHelper(node->getGreater());
	}
}
