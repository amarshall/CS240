/**
 * StreamOperations.cpp
 * CS240 Lab 3
 * @author J. Andrew Marshall (jmarsha6)
 */

#include "StreamOperations.h"

using namespace std;

StreamOperations::StreamOperations() { }

StreamOperations::StreamOperations(const string inputFile, const string outputFile) {
	inputStream.open(inputFile.data());
	outputStream.open(outputFile.data());
}

StreamOperations::~StreamOperations() {
	inputStream.close();
	outputStream.close();
}

void StreamOperations::process() {
	if(inputStream.is_open()) {
		int lineCount = 0;
		int wordCount = 1;
		while(!inputStream.eof()) {
			string cur;
			getline(inputStream, cur);
			
			// Replace as required
			while(cur.find(";") != string::npos) {
				cur.replace(cur.find(";"), 1, " SEMICOLON");
			}
			while(cur.find("public") != string::npos) {
				cur.replace(cur.find("public"), 6, "C++_KEYWORD");
			}
			while(cur.find("private") != string::npos) {
				cur.replace(cur.find("private"), 7, "C++_KEYWORD");
			}
			while(cur.find("class") != string::npos) {
				cur.replace(cur.find("class"), 5, "C++_KEYWORD");
			}
			while(cur.find("include") != string::npos) {
				cur.replace(cur.find("include"), 7, "C++_KEYWORD");
			}
			while(cur.find("int") != string::npos) {
				cur.replace(cur.find("int"), 3, "C++_KEYWORD");
			}
			while(cur.find("string") != string::npos) {
				cur.replace(cur.find("string"), 6, "C++_KEYWORD");
			}
			while(cur.find("iostream") != string::npos) {
				cur.replace(cur.find("iostream"), 8, "C++_KEYWORD");
			}
			
			// Count number of "words"
			string str = cur;
			while(str.find(' ') != string::npos) {
				str = str.substr(str.find(" ")+1, string::npos);
				wordCount++;
			}
			
			outputStream << lineCount << " " << cur << endl;
			lineCount++;
		}
	} else {
		cerr << "Error opening input file." << endl;
	}
}
