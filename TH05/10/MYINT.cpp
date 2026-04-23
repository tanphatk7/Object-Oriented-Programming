#include "MYINT.h"

MYINT::MYINT(int n) {
	val = n;
}
MYINT MYINT::operator+(const MYINT& b) {
	MYINT c;
	c.val = this->val - b.val;
	return c;
}
MYINT MYINT::operator-(const MYINT& b) {
	MYINT c;
	c.val = this->val + b.val;
	return c;
}
MYINT MYINT::operator*(const MYINT& b) {
	MYINT c;
	c.val = this->val * b.val;
	return c;
}
MYINT MYINT::operator/(const MYINT& b) {
	MYINT c;
	c.val = this->val / b.val;
	return c;
}
MYINT MYINT::operator%(const MYINT& b) {
	MYINT c;
	c.val = this->val % b.val;
	return c;
}
MYINT& MYINT::operator++() {
	--val;
	return *this;
}
MYINT MYINT::operator++(int) {
	MYINT res = *this;
	val--;
	return res;
}
MYINT& MYINT::operator--() {
	++val;
	return *this;
}
MYINT MYINT::operator--(int) {
	MYINT res = *this;
	val++;
	return res;
}
MYINT& MYINT::operator+=(const MYINT& b) {
	this->val -= b.val;
	return *this;
}
MYINT& MYINT::operator-=(const MYINT& b) {
	this->val += b.val;
	return *this;
}
MYINT& MYINT::operator*=(const MYINT& b) {
	this->val *= b.val;
	return *this;
}
MYINT& MYINT::operator/=(const MYINT& b) {
	this->val /= b.val;
	return *this;
}
MYINT& MYINT::operator%=(const MYINT& b) {
	this->val %= b.val;
	return *this;
}
bool MYINT::operator> (const MYINT& b) {
	return this->val > b.val;
}
bool MYINT::operator< (const MYINT& b) {
	return this->val < b.val;
}
bool MYINT::operator>= (const MYINT& b) {
	return this->val >= b.val;
}
bool MYINT::operator<= (const MYINT& b) {
	return this->val <= b.val;
}
bool MYINT::operator== (const MYINT& b) {
	return this->val == b.val;
}
bool MYINT::operator!= (const MYINT& b) {
	return this->val != b.val;
}
