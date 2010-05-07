/**
 * CS240 Lab 10
 * BinarySearchNode.cpp
 * @author J. Andrew Marshall (jmarsha6)
 * @author Aaron Shipper (ashippe1)
 * @author Kenneth Louie (klouie1)
 */

#include "BinarySearchTree.h"
#include <algorithm>
#include <ctype.h>

using namespace std;

/* Default constructor */
BinarySearchTree::BinarySearchTree() {
	root = NULL;
	charCount = 0;
	wordCount = 0;
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
 * Inserts the given element into the tree. This automatically strips
 * the given string of certain punctuation and converts all
 * characters to lowercase.
 * @see stripPunctuation()
 * @param elem The data to insert.
 */
void BinarySearchTree::insert(string elem) {
	for(unsigned int i = 0; i < elem.length(); ++i) {
		elem[i] = tolower(elem[i]);
	}
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
void BinarySearchTree::traversalHelper(TreeNode* node, vector<word>& words) {
	if(node != NULL) {
		traversalHelper(node->getLesser(), words);
		word cur;
		cur.elem = node->getWord();
		cur.frequency = node->getFrequency();
		words.push_back(cur);
		traversalHelper(node->getGreater(), words);
	}
}

/**
 * Print all the words in increasing order of frequency to stdout
 */
void BinarySearchTree::printFrequency() {
	vector<word> words;
	traversalHelper(root, words);
	sort(words.begin(), words.end(), WordCompare());
	for(vector<word>::iterator it = words.begin(); it != words.end(); ++it) {
		cout << "\"" << it->elem << "\" occurs " << it->frequency << " times." << endl;
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
	cout << "Total number of characters (sans whitespace & punctuation): " << charCount << endl;
}

/**
 * Removes periods, commas, semicolons, colons, exclamation points, question
 * marks, and double primes from the given string
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
	while(word.find("\"") != string::npos) {
		word.erase(word.find("\""), 1);
	}
	return word;
}

/**
 * Compares the frequency of two words
 * @param a The first word to compare
 * @param b The second word to compare
 * @return True if b has a higher frequency than a, else false
 */
bool BinarySearchTree::WordCompare::operator()(word a, word b) {
	return a.frequency < b.frequency;
}

/* Destructor */
BinarySearchTree::~BinarySearchTree() {
	delete root;
}
