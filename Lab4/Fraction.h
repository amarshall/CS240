/**
 * Fraction.h
 * CS240 Lab 4
 * @author J. Andrew Marshall (jmarsha6)
 */

#ifndef FRACTION_H__
#define FRACTION_H__

#include <iostream>

class Fraction {
	private:
		int num;
		int denom;

	public:
		Fraction();
		Fraction(int num, int denom);
		Fraction(const Fraction& f);
		~Fraction();

		friend bool operator==(const Fraction & f1, const Fraction & f2);
		Fraction operator+(const Fraction &f1) const;
		Fraction operator-(const Fraction &f1) const;
		Fraction operator*(const Fraction &f1) const;
		const Fraction& operator=(const Fraction &f);

		friend std::istream& operator>>(std::istream& in, Fraction & f);
		friend std::ostream& operator<<(std::ostream& out, const Fraction& f);
};

#endif // FRACTION_H__
