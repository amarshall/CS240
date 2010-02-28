/**
 * Fraction.cpp
 * CS240 Lab 4
 * @author J. Andrew Marshall (jmarsha6)
 */

#include "Fraction.h"

using namespace std;

Fraction::Fraction() {
}

Fraction::Fraction(int cNum, int cDenom) {
	num = cNum;
	denom = cDenom;
}

Fraction::Fraction(const Fraction& f) {
	num = f.num;
	denom = f.denom;
}

Fraction::~Fraction() {
}

bool operator==(const Fraction & f1, const Fraction & f2) {
}

Fraction Fraction::operator+(const Fraction &f1) const {
	Fraction newFrac;
	newFrac.num = num*f1.denom + f1.num*denom;
	newFrac.denom = denom * f1.denom;
	return newFrac;
}

Fraction Fraction::operator-(const Fraction &f1) const {
	Fraction newFrac;
	newFrac.num = num*f1.denom - f1.num*denom;
	newFrac.denom = denom * f1.denom;
	return newFrac;
}

Fraction Fraction::operator*(const Fraction &f1) const {
	Fraction newFrac;
	newFrac.num = num * f1.num;
	newFrac.denom = denom * f1.denom;
	return newFrac;
}

const Fraction& Fraction::operator=(const Fraction &f) {
	num = f.num;
	denom = f.denom;
	return *this;
}

std::istream& operator>>(std::istream& in, Fraction & f) {
	cout << "Numerator: ";
	in >> f.num;
	cout << "Denominator: ";
	in >> f.denom;
	return in;
}

std::ostream& operator<<(std::ostream& out, const Fraction& f) {
	out << f.num << '/' << f.denom;
	return out;
}
