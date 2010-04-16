#ifndef SEARCH_CLASS_H__
#define SEARCH_CLASS_H__

#include <iostream>

class SearchClass{
	private:
		int * intArray;
	public:
		SearchClass();
		int* createInputArray(int size, int seed);
		int linearSearch(int searchItem);
		int itBinarySearch(int searchItem);	
		int recBinarySearch(int searchItem);
};

#endif // SEARCH_CLASS_H__
