/**
 * CS240 Lab 10
 * BinarySearchTree.h
 * @author J. Andrew Marshall (jmarsha6)
 * @author Aaron Shipper (ashippe1)
 * @author Kenneth Louie (klouie1)
 */

#include "TreeNode.h"
#include <fstream>
#include <string>

class BinarySearchTree {
	private: 
		TreeNode* root;
		std::ofstream errorLog;
		int charCount;
		int wordCount;
		bool insertHelper(TreeNode *node, std::string elem);
		TreeNode* searchHelper(TreeNode *node, std::string elem) const;
		void traversalHelper(TreeNode *node);
	
	public:
		BinarySearchTree();
		~BinarySearchTree();
		TreeNode* search(std::string elem) const;
		void insert(std::string elem);
		void traverseInOrder();
		void printWordFrequency(std::string word);
		void uniqueWordCount();
		void totalCharCount();
		std::string stripPunctuation(std::string filename);
};
