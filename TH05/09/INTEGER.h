#pragma once
#include <iostream>
using namespace std;

class INTEGER
{
	int val;
public:
	INTEGER(int = 0);
	operator int();
	INTEGER& operator++();
	INTEGER operator++(int);
	INTEGER& operator--();
	INTEGER operator--(int);
	INTEGER& operator+=(const INTEGER&);
	INTEGER& operator-=(const INTEGER&);
	INTEGER& operator*=(const INTEGER&);
	INTEGER& operator/=(const INTEGER&);
	INTEGER& operator%=(const INTEGER&);
	friend istream& operator>> (istream& is, INTEGER& a) {
		is >> a.val;
		return is;
	}
	friend ostream& operator<< (ostream& os, INTEGER a) {
		os << a.val;
		return os;
	}
};

