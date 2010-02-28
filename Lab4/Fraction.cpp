/**
 * Fraction.cpp
 * CS240 Lab 4
 * @author J. Andrew Marshall (jmarsha6)
 */

#include "Fraction.h"

using namespace std;

/**
 * Default constructor, sets values to NULL
 */
Fraction::Fraction() {
	num = NULL;
	denom = NULL;
}

/**
 * Explicit value constructor, sets values to those given
 *
 * @params cNum Numerator
 * @params cDenom Denominator
 */
Fraction::Fraction(int cNum, int cDenom) {
	num = cNum;
	denom = cDenom;
}

/**
 * Copy constructor, sets values to the same as the given fraction
 *
 * @params cNum Fraction to copy values from
 */
Fraction::Fraction(const Fraction& f) {
	num = f.num;
	denom = f.denom;
}

/**
 * Destructor
 */
Fraction::~Fraction() {
}

/**
 * Overloads the == operator to test if two fractions are equivilant
 *
 * @returns bool Whether the two fractions are equal or not.
 */
bool operator==(const Fraction & f1, const Fraction & f2) {
	return (f1.num == f2.num) && (f1.denom == f2.denom);
}

/**
 * Overloads the + operator and adds two fractions
 *
 * @returns Fraction The resulting fraction.
 */
Fraction Fraction::operator+(const Fraction &f1) const {
	Fraction newFrac;
	newFrac.num = num*f1.denom + f1.num*denom;
	newFrac.denom = denom * f1.denom;
	return newFrac;
}

/**
 * Overloads the - operator and subtracts two fractions
 *
 * @returns Fraction The resulting fraction.
 */
Fraction Fraction::operator-(const Fraction &f1) const {
	Fraction newFrac;
	newFrac.num = num*f1.denom - f1.num*denom;
	newFrac.denom = denom * f1.denom;
	return newFrac;
}

/**
 * Overloads the * operator and multiplies two fractions
 *
 * @returns Fraction The resulting fraction.
 */
Fraction Fraction::operator*(const Fraction &f1) const {
	Fraction newFrac;
	newFrac.num = num * f1.num;
	newFrac.denom = denom * f1.denom;
	return newFrac;
}

/**
 * Overloads the = operator and copies the values of the given Fraction
 *
 * @returns Fraction Reference to this fraction.
 */
const Fraction& Fraction::operator=(const Fraction &f) {
	num = f.num;
	denom = f.denom;
	return *this;
}

/**
 * Overloads the >> operator and requests values for the fraction from the user
 *
 * @returns std::istream Reference to the given stream,
 */
std::istream& operator>>(std::istream& in, Fraction & f) {
	cout << "Numerator: ";
	in >> f.num;
	do {
		cout << "Denominator (non-zero): ";
		in >> f.denom;
	} while(f.denom == 0);
	return in;
}

/**
 * Overloads the << operator and stringifies the fraction
 *
 * @returns std::ostream Reference to the given stream,
 */
std::ostream& operator<<(std::ostream& out, const Fraction& f) {
	out << f.num << '/' << f.denom;
	return out;
}
