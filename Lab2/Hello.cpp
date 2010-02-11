#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Hello {

private:
	// C style programming, in C++, std::string is preferred
	char output_string[128];

public:

	Hello(int i) {
		if(i == 0) {
			strcpy(output_string,"Hello C++ Data Structures!");
		} else {
			strcpy(output_string,"Hello Data Structures!");
		}
	}
	
	void printHello() {
		cout << output_string << endl;
	}

	void printNewGreeting(string greeting) {
		cout << greeting << endl;
	}
};


int main(int argc, char *argv[]) {

	// Creating an instance of  Hello Object 
	Hello *my_hello_ptr = new Hello(0);

	my_hello_ptr->printHello();
	my_hello_ptr->printNewGreeting("Yay for C++!");
	delete(my_hello_ptr);

	// Another way of creating a Hello Object
	// and invoking methods on it 

	Hello  my_hello(1);
	my_hello.printHello();
	my_hello.printNewGreeting("Yay for Java!");
}

