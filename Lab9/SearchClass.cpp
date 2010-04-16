#include "SearchClass.h"
#include <stdlib.h>
#include <time.h>


using namespace std;

SearchClass::SearchClass(){
	intArray = NULL;
}

int * SearchClass::createInputArray(int size, int seed){
	intArray = new int[size];
	srand(seed);
	for(int i =0; i < size ; i++){
		intArray[i] = rand();
	}
	return intArray;
}

int SearchClass::linearSearch(int searchItem){
	for( int i =0; i < sizeof(intArray);i++){
		if (intArray[i] == searchItem) return i;
	}
	return -1;
}

int SearchClass::itBinarySearch(int searchItem){

	int first= 0;
	int last = sizeof(intArray) -1;
	int mid = (first+last)/2;

	while(first != last){
		if(intArray[mid] == searchItem) return mid;
		else{
			first = mid;
			mid = (first +last)/2;
		}
	}
	return -1;
}

int SearchClass::recBinarySearch(int searchItem){
	
	return -1;
}
