/**
 * StreamOperations.h
 * CS240 Lab 3
 * @author J. Andrew Marshall (jmarsha6)
 */

#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>

class StreamOperations {
	private:
		std::ifstream inputStream;
		std::ofstream outputStream;
	
	public:
		/**
		 * Default constructor, does nothing.
		 */
		StreamOperations();
		
		/**
		 * Takes an input and output filename for use by the StreamOperations.
		 *
		 * @param inputFile Filename of the input file
		 * @param outputFile Filename of the output file
		 */
		StreamOperations(const std::string inputFile, const std::string outputFile);
		
		/**
		 * Destructor, ensures all objects are cleaned-up.
		 */
		~StreamOperations();
		
		/**
		 * Processes the input file according to the lab specifications and outputs the
		 * resulting text to the output file.
		 */
		void process();
};
