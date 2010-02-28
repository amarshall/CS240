/**
 * FractionUtil.h
 * CS240 Lab 4
 * @author J. Andrew Marshall (jmarsha6)
 */

#ifndef FRACTION_UTIL_H__
#define FRACTION_UTIL_H__

#include "Fraction.h"

class FractionUtil {
	public:
		/* Reads in two fractions and puts them in the given memory locations */
		void readTwoFractions(Fraction &firstFraction, Fraction &secondFraction);
		/* Runs the simple math game */
		bool runSimpleMathGame();
};

#endif // FRACTION_UTIL_H__
