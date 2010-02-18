/**
 * Fraction.cpp
 * CS240 Lab 4
 * @author J. Andrew Marshall (jmarsha6)
 */

using namespace std;

Fraction::Fraction() {
}

Fraction::Fraction(int num, int denom) {
}

Fraction::Fraction(const Fraction& f) {
}

Fraction::~Fraction() {
}

friend bool Fraction::operator==(const Fraction & f1, const Fraction & f2) {
}

Fraction Fraction::operator+(const Fraction &f1) const {
}

Fraction Fraction::operator-(const Fraction &f1) const {
}

Fraction Fraction::operator*(const Fraction &f1) const {
}

const Fraction& Fraction::operator=(const Fraction &f) {
}

friend std::istream& Fraction::operator>>(std::istream& in, Fraction & f) {
}

friend std::ostream& Fraction::operator<<(std::ostream& out, const Fraction& f) {
}
