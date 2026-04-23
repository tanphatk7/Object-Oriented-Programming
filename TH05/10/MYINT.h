#pragma once
#include <iostream>
using namespace std;

class MYINT
{
	int val;
public:
	MYINT(int = 0);
	MYINT operator+ (const MYINT&);
	MYINT operator- (const MYINT&);
	MYINT operator* (const MYINT&);
	MYINT operator/ (const MYINT&);
	MYINT operator% (const MYINT&);
	MYINT& operator++ ();
	MYINT operator++ (int);
	MYINT& operator-- ();
	MYINT operator-- (int);
	MYINT& operator+= (const MYINT&);
	MYINT& operator-= (const MYINT&);
	MYINT& operator*= (const MYINT&);
	MYINT& operator/= (const MYINT&);
	MYINT& operator%= (const MYINT&);
	bool operator> (const MYINT&);
	bool operator< (const MYINT&);
	bool operator>= (const MYINT&);
	bool operator<= (const MYINT&);
	bool operator== (const MYINT&);
	bool operator!= (const MYINT&);
	friend istream& operator>> (istream& is, MYINT& a) {
		is >> a.val;
		return is;
	}
	friend ostream& operator<< (ostream& os, MYINT a) {
		os << a.val;
		return os;
	}
};

