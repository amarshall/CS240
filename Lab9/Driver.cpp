/**
 * CS240 Lab 9
 * Driver.cpp
 * @author Ahmet Iscen (aiscen1)
 * @author J. Andrew Marshall (jmarsha6)
 */

#include "SearchClass.h"
#include "BinarySearchTree.h"
#include <sys/time.h>

using namespace std;

int main(){
	
	SearchClass search1;
	BinarySearchTree searchTree1;
	int* sizeArray = search1.createInputArray(10, time(NULL));

	timeval start;
	timeval finish;
	gettimeofday(&start, NULL);
	
	for(int i=0;i<100;i++){	
	search1.linearSearch(sizeArray[9]);
	}
	gettimeofday(&finish, NULL);
	double totalTime = 
	(double)((double)(finish.tv_sec - start.tv_sec) * 1000000 + 
	 (double)(finish.tv_usec - start.tv_usec)) / 
	(double)1000000;
    cout << "Total time: " << totalTime << " seconds" << endl;


	gettimeofday(&start, NULL);
	for(int i=0;i<100;i++){	
	search1.itBinarySearch(sizeArray[9]);
	}
	gettimeofday(&finish, NULL);
	totalTime = 
	(double)((double)(finish.tv_sec - start.tv_sec) * 1000000 + 
	 (double)(finish.tv_usec - start.tv_usec)) / 
	(double)1000000;
    cout << "Total time: " << totalTime << " seconds" << endl;

	gettimeofday(&start, NULL);
	for(int i=0;i<100;i++){	
	search1.recBinarySearch(sizeArray[9]);
	}
	gettimeofday(&finish, NULL);
	totalTime = 
	(double)((double)(finish.tv_sec - start.tv_sec) * 1000000 + 
	 (double)(finish.tv_usec - start.tv_usec)) / 
	(double)1000000;
    cout << "Total time: " << totalTime << " seconds" << endl;


	for(int i =0; i <10; i++){
		cout << sizeArray[i] << endl;
	}
	
}
