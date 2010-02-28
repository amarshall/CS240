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
		int num;  // The numerator
		int denom;  // The denominator

	public:
		/* Default constructor, creates a new fraction with no values */
		Fraction();
		/* Explicit value constructor, creates new fraction with given values */
		Fraction(int num, int denom);
		/* Copy constructor; creates new fraction with values of the given one */
		Fraction(const Fraction& f);
		/* Destructor */
		~Fraction();

		/* Overloaded == operator */
		friend bool operator==(const Fraction & f1, const Fraction & f2);
		/* Overloaded + operator */
		Fraction operator+(const Fraction &f1) const;
		/* Overloaded - operator */
		Fraction operator-(const Fraction &f1) const;
		/* Overloaded * operator */
		Fraction operator*(const Fraction &f1) const;
		/* Overloaded = operator */
		const Fraction& operator=(const Fraction &f);
		/* Overloaded >> operator */
		friend std::istream& operator>>(std::istream& in, Fraction & f);
		/* Overloaded << operator */
		friend std::ostream& operator<<(std::ostream& out, const Fraction& f);
};

#endif // FRACTION_H__
