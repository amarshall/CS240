
#include <iostream>

using namespace std;

int main() {
	/* declare function prototypes */
	void swapPassByValue(int one, int two);
	void swapPassByRef(int &one, int &two);

	/* declare function prototype */
	// FIXME: need prototype for doNotSwap

	/* declare and initialize variables */
	int num1 = 1;
	int num2 = 2;

	/* print values of num1 and num2 before calling swap */
	cout << "Values of integers before calling swap functions " << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	swapPassByValue(num1, num2);

	/* print the value of num1 and num2 after returning from swapPassByValue */
	cout << endl << "Values of integers after calling the swapPassByValue function " << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	swapPassByRef(num1, num2);

	/* print the value of num1 and num2 after returning from swapPassByRef */
	cout << endl << "Values of integers after calling the swapPassByRef function " << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	return 0;
}

void swapPassByValue(int one, int two) {
	int tmp = one;
	one = two;
	two = tmp;
}

void swapPassByRef(int &one, int &two) {
	int tmp = one;
	one = two;
	two = tmp;
}
