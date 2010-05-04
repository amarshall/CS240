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
		bool insertHelper(TreeNode *node, std::string elem);
		TreeNode* searchHelper(TreeNode *node, std::string elem) const;
		void traversalHelper(TreeNode *node);
		void printWordFrequency(std::string findString);
	
	public:
		BinarySearchTree();
		~BinarySearchTree();
		TreeNode* search(std::string elem) const;
		bool insert(std::string elem);
		void traverseInOrder();
};
