/**
 * FractionUser.cpp
 * CS240 Lab 4
 * @author J. Andrew Marshall (jmarsha6)
 */

#include <iostream>
#include "FractionUtil.h"

using namespace std;

int main(int argc, char *argv[]) {
	FractionUtil fractionUtil;
	bool oneMoreTime = true;
	while(oneMoreTime) {
		oneMoreTime = fractionUtil.runSimpleMathGame();
	}

	return 0;
}

