/**
 * CS240 Lab 9
 * TreeNode.h
 * @author J. Andrew Marshall (jmarsha6)
 * @author Ahmet Iscen (aiscen1)
 */

#include <iostream>

class TreeNode {
	private:
		int data;
		TreeNode* lesserNode;
		TreeNode* greaterNode;
		
	public:
		TreeNode();
		TreeNode(int d);
		TreeNode* getLesser();
		TreeNode* getGreater();
		int getData();
		void setLesser(TreeNode *node);
		void setGreater(TreeNode *node);
};
