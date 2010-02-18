/**
 * FractionUtil.cpp
 * CS240 Lab 4
 * @author J. Andrew Marshall (jmarsha6)
 */

#include "FractionUtil.h"
#include "Fraction.h"
#include <iostream>
#include <string>

using namespace std;

// reads two fractions using the overloading cin operator
void FractionUtil::readTwoFractions(Fraction &firstFraction, Fraction &secondFraction) {
	cout << endl;
	cout << "Please enter the numerator and denominator for the first fraction:" << endl;
	cin >> firstFraction;
	cout << "Please enter the numerator and denominator for the second fraction:" << endl;
	cin >> secondFraction;
}


bool FractionUtil::runSimpleMathGame() {
	cout << "--------------------------------" << endl;
	cout << "Welcome to the Simple Math-Game" << endl;
	cout << "--------------------------------" << endl << endl;
	cout << "Please choose among the following options:" << endl;
	cout << "add" << endl;
	cout << "subtract" << endl;
	cout << "multiply" << endl;
	cout << "equals" << endl;
	cout << "quit" << endl;

	bool oneMoreTime = true;

	string userOption;
	Fraction firstFraction, secondFraction, answerFraction;

	cout << "Please enter your option: ";
	cin >> userOption;
	if(userOption == "quit") {
		cout << "Thank you for playing the Simple Math Game! Goodbye." << endl; 
		oneMoreTime = false;
	} else if((userOption == "add") || (userOption == "ADD")) {
		readTwoFractions(firstFraction, secondFraction);
		answerFraction = firstFraction + secondFraction;
		cout << answerFraction;
		// TODO: Add code for remainder of user options
	} else {
		cout << "The option for " <<  userOption << " is not valid. " << endl;
	}

	return oneMoreTime;
}
