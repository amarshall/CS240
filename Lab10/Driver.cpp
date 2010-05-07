/**
 * CS240 Lab 10
 * Driver.cpp
 * @author J. Andrew Marshall (jmarsha6)
 * @author Aaron Shipper (ashippe1)
 * @author Kenneth Louie (klouie1)
 */


#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include "BinarySearchTree.h"
using namespace std;

int main(int argc, char *argv[]) {
	if(argc <= 1) {
		cerr << "No input file specified." << endl;
		exit(1);
	}
	ifstream in;
	string inputFile = (string(argv[1]));
	in.open(inputFile.data());
	if(!in.is_open()) {
		cerr << "Error opening inputfile " << inputFile << endl;
		exit(1);
	}

	BinarySearchTree* bst = new BinarySearchTree();

	while (!in.eof()) {
		string cur;
		getline(in, cur);
		istringstream iss(cur);
		do {
			string sub;
			iss >> sub;
			if((int)sub[0] != 0) {
				bst->insert(sub);
			}
		} while (iss);
	}
	bst->printFrequency();
	bst->uniqueWordCount();
	bst->totalCharCount();
	string input;
	do {
		cout << "Enter word to search for or type \"ExitSpring10\" to finish: ";
		cin >> input;
		bst->printWordFrequency(input);
	} while (input !="ExitSpring10");

	in.close();
	return 0;
}

