#pragma once
#include <iostream>
using namespace std;
class PS
{
	int tu, mau;
public:
	PS(int = 0, int = 1);
	void RutGon();
	friend PS operator+ (PS a, PS b);
	friend PS operator- (PS a, PS b);
	friend PS operator* (PS a, PS b);
	friend PS operator/ (PS a, PS b);
	friend bool operator== (PS a, PS b);
	friend bool operator!= (PS a, PS b);
	friend bool operator> (PS a, PS b);
	friend bool operator>= (PS a, PS b);
	friend bool operator< (PS a, PS b);
	friend bool operator<= (PS a, PS b);

	friend istream& operator>> (istream& is, PS& a) {
		is >> a.tu >> a.mau;
		return is;
	}
	friend ostream& operator<< (ostream& os, PS a) {
		os << a.tu << "/" << a.mau;
		return os;
	}
};

