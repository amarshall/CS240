/**
 * Driver.cpp
 * CS240 Lab 3
 * @author J. Andrew Marshall (jmarsha6)
 */

#include "StreamOperations.h"

using namespace std;

int main(int argc, char *argv[]) {
	if(argc <= 1) {
		cerr << "No input file specified." << endl;
		exit(1);
	}
	StreamOperations myStreamOps(string(argv[1]), "StreamOperationsOut.txt");
	myStreamOps.process();
	
	return 0;
}
