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
		void readTwoFractions(Fraction &firstFraction, Fraction &secondFraction);
		bool runSimpleMathGame();
};

#endif // FRACTION_UTIL_H__
