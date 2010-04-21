/**
 * CS240 Lab 9
 * SearchClass.cpp
 * @author Ahmet Iscen (aiscen1)
 * @author J. Andrew Marshall (jmarsha6)
 */

#include "SearchClass.h"
#include <stdlib.h>
#include <time.h>
#include <algorithm>

using namespace std;

/* Default Constructor */
SearchClass::SearchClass() {
	intArray = NULL;
	size = 0;
}

/**
 * Creates a dynamically allocated array, and adds random numbers to it.
 * @param sizeIn size of the array.
 * @param seed seed for the random numbers
 * @return intArray pointer to the created array.
 */
int* SearchClass::createInputArray(int sizeIn, int seed) {
	size = sizeIn;
	intArray = new int[size];
	srand(seed);
	for(int i = 0; i < size; i++) {
		intArray[i] = rand();
	}
	sort(intArray, intArray+size);
	
	return intArray;
}


/**
 * Searches the item linearly in the array.
 * @param searchItem item to search for.
 * @return the index of the searchItem, if not found return -1.
 */
int SearchClass::linearSearch(int searchItem) {
	for(int i = 0; i < size; i++) {
		if(intArray[i] == searchItem) return i;
	}
	return -1;
}

/**
 * Performs the binary search using the divide and conquer method.
 * @param searchItem item to search for.
 * @return the index of the searchItem, if not found return -1.
 */
int SearchClass::itBinarySearch(int searchItem){
	int first = 0;
	int last = size-1;
	int mid;
	while(first <= last) {
		mid = (first+last)/2;
		if(intArray[mid] == searchItem) {
			return mid;
		} else if(searchItem < intArray[mid]) {
			last = mid-1;
		} else {
			first = mid+1;
		}
	}
	return -1;
}

/**
 * Calls the private binaryRecursion to perform a recursively binary search.
 * @param searchItem item to search for.
 * @return the returned value from the binaryRecursion method.
 */
int SearchClass::recBinarySearch(int searchItem) {
	return binaryRecursion(0, size-1, searchItem);
}

/**
 * A private method which calls itself recursively to perform a binary search.
 * @param first index of the first element of the array.
 * @param last index of the last element of the array
 * @param searchItem item to search for
 * @return the index of the searchItem, if not found return -1.
 */
int SearchClass::binaryRecursion(int first, int last, int searchItem){
	int mid = (first+last)/2;
	if(intArray[mid] == searchItem) {
		return mid;
	} else {
		if(first == last) {
			return -1;
		} else if(intArray[mid] < searchItem) {
			return binaryRecursion(mid+1, last, searchItem);
		} else {
			return binaryRecursion(first, mid-1, searchItem);
		}
	}
}
