/**
 * CS240 Lab 9
 * SearchClass.h
 * @author Ahmet Iscen (aiscen1)
 * @author J. Andrew Marshall (jmarsha6)
 */

#ifndef SEARCH_CLASS_H__
#define SEARCH_CLASS_H__

#include <iostream>

class SearchClass{
	private:
		int* intArray;
		int size;
		int binaryRecursion(int first, int last, int searchItem);
		
	public:
		SearchClass();
		int* createInputArray(int size, int seed);
		int linearSearch(int searchItem);
		int itBinarySearch(int searchItem);
		int recBinarySearch(int searchItem);
};

#endif // SEARCH_CLASS_H__
