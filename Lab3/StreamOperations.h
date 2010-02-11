/**
 * StreamOperations.h
 * CS240 Lab 3
 * @author J. Andrew Marshall (jmarsha6)
 */

#include <stdlib.h>
#include <string>
#include <fstream>

class StreamOperations {
	private:
		ifstream inputStream;
		ofstream outputStream;
	
	public:
		StreamOperations();
		StreamOperations(const string inputFile, const string outputFile);
		~StreamOperations();
};

