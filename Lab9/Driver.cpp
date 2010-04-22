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
//Array of size 10
	int* sizeArray = search1.createInputArray(10, time(NULL));
	fout << "Array of size 10" << endl;

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
	fout << "Linear Search: "<< totalTime<<endl;


	gettimeofday(&start, NULL);
	for(int i=0;i<100;i++){	
	search1.itBinarySearch(sizeArray[9]);
	}
	gettimeofday(&finish, NULL);
	totalTime = 
	(double)((double)(finish.tv_sec - start.tv_sec) * 1000000 + 
	 (double)(finish.tv_usec - start.tv_usec)) / 
	(double)1000000;
	fout << "Iterative Binary Search: "<< totalTime<<endl;

	gettimeofday(&start, NULL);
	for(int i=0;i<100;i++){	
	search1.recBinarySearch(sizeArray[9]);
	}
	gettimeofday(&finish, NULL);
	totalTime = 
	(double)((double)(finish.tv_sec - start.tv_sec) * 1000000 + 
	 (double)(finish.tv_usec - start.tv_usec)) / 
	(double)1000000;
	fout << "Recursive Binary Search: "<< totalTime<<endl;

//Array of size 1000
	sizeArray = search1.createInputArray(1000, time(NULL));
	fout << "\nArray of size 1000"<<endl;

	gettimeofday(&start, NULL);
	for(int i=0;i<100;i++){	
	search1.linearSearch(sizeArray[999]);
	}
	gettimeofday(&finish, NULL);
	totalTime = 
	(double)((double)(finish.tv_sec - start.tv_sec) * 1000000 + 
	 (double)(finish.tv_usec - start.tv_usec)) / 
	(double)1000000;
	fout << "Linear Search: "<< totalTime<<endl;

	gettimeofday(&start, NULL);
	for(int i=0;i<100;i++){	
	search1.itBinarySearch(sizeArray[999]);
	}
	gettimeofday(&finish, NULL);
	totalTime = 
	(double)((double)(finish.tv_sec - start.tv_sec) * 1000000 + 
	 (double)(finish.tv_usec - start.tv_usec)) / 
	(double)1000000;
	fout << "Iterative Binary Search: "<< totalTime<<endl;

	gettimeofday(&start, NULL);
	for(int i=0;i<100;i++){	
	search1.recBinarySearch(sizeArray[999]);
	}
	gettimeofday(&finish, NULL);
	totalTime = 
	(double)((double)(finish.tv_sec - start.tv_sec) * 1000000 + 
	 (double)(finish.tv_usec - start.tv_usec)) / 
	(double)1000000;
	fout << "Recursive Binary Search: "<< totalTime<<endl;

//Array of size 10000
	sizeArray = search1.createInputArray(10000, time(NULL));
	fout <<"\nArray of size 10000"<<endl;	

	gettimeofday(&start, NULL);
	for(int i=0;i<100;i++){	
	search1.linearSearch(sizeArray[9999]);
	}
	gettimeofday(&finish, NULL);
	totalTime = 
	(double)((double)(finish.tv_sec - start.tv_sec) * 1000000 + 
	 (double)(finish.tv_usec - start.tv_usec)) / 
	(double)1000000;
	fout << "Linear Search: "<< totalTime<<endl;

	gettimeofday(&start, NULL);
	for(int i=0;i<100;i++){	
	search1.itBinarySearch(sizeArray[9999]);
	}
	gettimeofday(&finish, NULL);
	totalTime = 
	(double)((double)(finish.tv_sec - start.tv_sec) * 1000000 + 
	 (double)(finish.tv_usec - start.tv_usec)) / 
	(double)1000000;
	fout << "Iterative Binary Search: "<< totalTime<<endl;

	gettimeofday(&start, NULL);
	for(int i=0;i<100;i++){	
	search1.recBinarySearch(sizeArray[9999]);
	}
	gettimeofday(&finish, NULL);
	totalTime = 
	(double)((double)(finish.tv_sec - start.tv_sec) * 1000000 + 
	 (double)(finish.tv_usec - start.tv_usec)) / 
	(double)1000000;
	fout << "Recursive Binary Search: "<< totalTime<<endl;

//Array of size 100000
	sizeArray = search1.createInputArray(100000, time(NULL));
	fout<<"\nArray of size 100000"<<endl;

	gettimeofday(&start, NULL);
	for(int i=0;i<100;i++){	
	search1.linearSearch(sizeArray[99999]);
	}
	gettimeofday(&finish, NULL);
	totalTime = 
	(double)((double)(finish.tv_sec - start.tv_sec) * 1000000 + 
	 (double)(finish.tv_usec - start.tv_usec)) / 
	(double)1000000;
	fout << "Linear Search: "<< totalTime<<endl;

	gettimeofday(&start, NULL);
	for(int i=0;i<100;i++){	
	search1.itBinarySearch(sizeArray[99999]);
	}
	gettimeofday(&finish, NULL);
	totalTime = 
	(double)((double)(finish.tv_sec - start.tv_sec) * 1000000 + 
	 (double)(finish.tv_usec - start.tv_usec)) / 
	(double)1000000;
	fout << "Iterative Binary Search: "<< totalTime<<endl;

	gettimeofday(&start, NULL);
	for(int i=0;i<100;i++){	
	search1.recBinarySearch(sizeArray[99999]);
	}
	gettimeofday(&finish, NULL);
	totalTime = 
	(double)((double)(finish.tv_sec - start.tv_sec) * 1000000 + 
	 (double)(finish.tv_usec - start.tv_usec)) / 
	(double)1000000;
	fout << "Recursive Binary Search: "<< totalTime<<endl;

	fout.close();

	
}
