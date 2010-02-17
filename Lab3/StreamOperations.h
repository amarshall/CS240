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
		std::ifstream inputStream;
		std::ofstream outputStream;
	
	public:
		StreamOperations();
		StreamOperations(const std::string inputFile, const std::string outputFile);
		~StreamOperations();
		void process();
};

