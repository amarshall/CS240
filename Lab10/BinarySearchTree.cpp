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
	charCount = 0;
	wordCount = 0;
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
 */
void BinarySearchTree::insert(string elem) {
	elem = stripPunctuation(elem);
	charCount += elem.length();
	if(root == NULL) {
		root = new TreeNode(elem);
		wordCount++;
	} else {
		if(insertHelper(root, elem)) wordCount++;
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
 * @return False if the word was not a new word and already existed in the tree.
 */
bool BinarySearchTree::insertHelper(TreeNode *node, string elem) {
	if(node->getWord() == elem) {
		node->increaseFrequency();
		charCount += elem.length();
		return false;
	} else if(elem.compare(node->getWord()) < 0) {
		if(node->getLesser() == NULL) {
			node->setLesser(new TreeNode(elem));
			charCount += elem.length();
			wordCount++;
		} else {
			return insertHelper(node->getLesser(), elem);
		}
	} else if(elem.compare(node->getWord()) > 0) {
		if(node->getGreater() == NULL) {
			node->setGreater(new TreeNode(elem));
			charCount += elem.length();
			wordCount++;
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

/**
 * Prints the number of times the given word occurred to stdout
 * @param findString The word to print the frequency for.
 */
void BinarySearchTree::printWordFrequency(string findString) {
	TreeNode* cur = search(findString);
	if(cur != NULL) {
		cout << "The frequency of \"" << findString << "\" is: " << cur->getFrequency() << endl;
	} else {
		cout << "Specified word \"" << findString << "\" not found" << endl;
	}
}

/* Prints the number of unique words to stdout */
void BinarySearchTree::uniqueWordCount() {
	cout << "Number of unique words: " << wordCount << endl;
}

/* Prints the total number of characters to stdout */
void BinarySearchTree::totalCharCount() {
	cout << "Total number of characters (sans whitespace & punctuation): " << charCount;
}

/**
 * Removes periods, commas, semicolons, colons, exclamation points, question
 * marks, single primes, and double primes from the given string
 * @param word The string to strip punctuation from.
 * @return The string sans punctuation.
 */
string BinarySearchTree::stripPunctuation(string word) {
	while(word.find(";") != string::npos) {
		word.erase(word.find(";"), 1);
	}
	while(word.find(".") != string::npos) {
		word.erase(word.find("."), 1);
	}
	while(word.find(",") != string::npos) {
		word.erase(word.find(","), 1);
	}
	while(word.find(":") != string::npos) {
		word.erase(word.find(":"), 1);
	}
	while(word.find("!") != string::npos) {
		word.erase(word.find("!"), 1);
	}
	while(word.find("?") != string::npos) {
		word.erase(word.find("?"), 1);
	}
	while(word.find("'") != string::npos) {
		word.erase(word.find("?"), 1);
	}
	while(word.find("\"") != string::npos) {
		word.erase(word.find("?"), 1);
	}
	return word;
}


/* Destructor */
BinarySearchTree::~BinarySearchTree() {
	errorLog.close();
	delete root;
}
