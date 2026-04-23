#include "INTEGER.h"

INTEGER::INTEGER(int n) {
	val = n;
}
INTEGER::operator int() {
	return val;
}
INTEGER& INTEGER::operator++() {
	++val;
	return *this;
}
INTEGER INTEGER::operator++(int) {
	INTEGER res = *this;
	val++;
	return res;
}
INTEGER& INTEGER::operator--() {
	--val;
	return *this;
}
INTEGER INTEGER::operator--(int) {
	INTEGER res = *this;
	val--;
	return res;
}
INTEGER& INTEGER::operator+=(const INTEGER& b) {
	this->val += b.val;
	return *this;
}
INTEGER& INTEGER::operator-=(const INTEGER& b) {
	this->val -= b.val;
	return *this;
}
INTEGER& INTEGER::operator*=(const INTEGER& b) {
	this->val *= b.val;
	return *this;
}
INTEGER& INTEGER::operator/=(const INTEGER& b) {
	this->val /= b.val;
	return *this;
}
INTEGER& INTEGER::operator%=(const INTEGER& b) {
	this->val %= b.val;
	return *this;
}