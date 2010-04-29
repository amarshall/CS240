/**
 * CS240 Lab 9
 * BinarySearchTree.h
 * @author J. Andrew Marshall (jmarsha6)
 * @author Ahmet Iscen (aiscen1)
 */

#include "TreeNode.h"
#include <fstream>

class BinarySearchTree {
	private: 
		TreeNode* root;
		std::ofstream errorLog;
		bool insertHelper(TreeNode *node, int elem);
		bool searchHelper(TreeNode *node, int elem) const;
		void traversalHelper(TreeNode *node);
	
	public:
		BinarySearchTree();
		~BinarySearchTree();
		bool search(int elem) const;
		bool insert(int elem);
		void traverseInOrder();
};
