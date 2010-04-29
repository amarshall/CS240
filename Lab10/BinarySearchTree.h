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
		bool searchHelper(TreeNode *node, std::string elem) const;
		void traversalHelper(TreeNode *node);
	
	public:
		BinarySearchTree();
		~BinarySearchTree();
		bool search(std::string elem) const;
		bool insert(std::string elem);
		void traverseInOrder();
};
