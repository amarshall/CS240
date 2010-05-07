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
#include <vector>

class BinarySearchTree {
	private:
		struct word {
			std::string elem;
			int frequency;
		};
		TreeNode* root;
		std::ofstream errorLog;
		int charCount;
		int wordCount;
		bool insertHelper(TreeNode *node, std::string elem);
		TreeNode* searchHelper(TreeNode *node, std::string elem) const;
		void traversalHelper(TreeNode *node, std::vector<word>& words);
		class WordCompare {
			public:
				bool operator()(word a, word b);
		};
	
	public:
		BinarySearchTree();
		~BinarySearchTree();
		TreeNode* search(std::string elem) const;
		void insert(std::string elem);
		void printFrequency();
		void printWordFrequency(std::string word);
		void uniqueWordCount();
		void totalCharCount();
		std::string stripPunctuation(std::string filename);
};
