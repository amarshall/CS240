/**
 * Driver.cpp
 * CS240 Lab 3
 * @author J. Andrew Marshall (jmarsha6)
 */

#include "StreamOperations.h"

int main() {
	StreamOperations myStreamOps("StreamOperations.cpp", "StreamOperationsOut.txt");
	myStreamOps.process();
	
	return 0;
}

