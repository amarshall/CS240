/**
 * StreamOperations.cpp
 * CS240 Lab 3
 * @author J. Andrew Marshall (jmarsha6)
 */

#include "StreamOperations.h"

StreamOperations::StreamOperations() { }

StreamOperations::StreamOperations(const string inputFile, const string outputFile) {
	inputStream.open(inputFile.data());
}

StreamOperations::~StreamOperations() {
	inputStream.close();
	outputStream.close();
}
