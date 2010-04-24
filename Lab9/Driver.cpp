/**
 * CS240 Lab 9
 * Driver.cpp
 * @author Ahmet Iscen (aiscen1)
 * @author J. Andrew Marshall (jmarsha6)
 */

#include "SearchClass.h"
#include "BinarySearchTree.h"
#include <sys/time.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cassert>
#include <cfloat>
#include <sstream>
#include <stdlib.h>

using namespace std;

int main(){
	SearchClass search1;

	ofstream fout;
	string outputFile ="SearchPerformances.txt";
	fout.open(outputFile.data());
	assert(fout.is_open());
	timeval start;
	timeval finish;
	double totalTime;
	int arraySizes[4] = {10, 1000, 10000, 100000};
	for(int i = 0; i < 4; i++) {
		int* sizeArray = search1.createInputArray(arraySizes[i], time(NULL));
		fout << "Array of size " << arraySizes[i] << endl;
		
		// Linear search
		gettimeofday(&start, NULL);
		for(int j = 0; j<100; j++) {
			search1.linearSearch(sizeArray[arraySizes[i]-1]);
		}
		gettimeofday(&finish, NULL);
		totalTime = (double)((double)(finish.tv_sec - start.tv_sec) * 1000000 +
			(double)(finish.tv_usec - start.tv_usec)) / (double)1000000;
		fout << "Linear Search: " << totalTime << endl;
		
		// Interative binary search
		gettimeofday(&start, NULL);
		for(int j=0; j<100; j++) {
			search1.itBinarySearch(sizeArray[arraySizes[i]-1]);
		}
		gettimeofday(&finish, NULL);
		totalTime = (double)((double)(finish.tv_sec - start.tv_sec) * 1000000 +
			(double)(finish.tv_usec - start.tv_usec)) / (double)1000000;
		fout << "Iterative Binary Search: " << totalTime << endl;
		
		// Recursive binary search
		gettimeofday(&start, NULL);
		for(int j=0; j<100; j++) {
			search1.recBinarySearch(sizeArray[arraySizes[i]-1]);
		}
		gettimeofday(&finish, NULL);
		totalTime = (double)((double)(finish.tv_sec - start.tv_sec) * 1000000 +
			(double)(finish.tv_usec - start.tv_usec)) / (double)1000000;
		fout << "Recursive Binary Search: " << totalTime << endl;
		
		// Binary search tree
		BinarySearchTree* bst = new BinarySearchTree();
		for(int j = 0; j < arraySizes[i]; j++) {
			bst->insert(sizeArray[i]);
		}
		gettimeofday(&start, NULL);
		for(int j = 0; j < 100; j++) {
			bst->search(sizeArray[arraySizes[i]-1]);
		}
		gettimeofday(&finish, NULL);
		totalTime = (double)((double)(finish.tv_sec - start.tv_sec) * 1000000 +
			(double)(finish.tv_usec - start.tv_usec)) / (double)1000000;
		fout << "Binary Search Tree: " << totalTime << endl << endl;
		
		delete bst;
	}
	
	fout.close();
}
