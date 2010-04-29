/**
 * CS240 Lab 10
 * TreeNode.h
 * @author J. Andrew Marshall (jmarsha6)
 * @author Aaron Shipper (ashippe1)
 * @author Kenneth Louie (klouie1)
 */

#include <iostream>
#include <string>

class TreeNode {
	private:
		std::string word;
		int frequency;
		TreeNode* lesserNode;
		TreeNode* greaterNode;
		
	public:
		TreeNode();
		TreeNode(std::string w);
		~TreeNode();
		TreeNode* getLesser();
		TreeNode* getGreater();
		int getWord();
		int getFrequency();
		void increaseFrequency();
		void setLesser(TreeNode *node);
		void setGreater(TreeNode *node);
};
