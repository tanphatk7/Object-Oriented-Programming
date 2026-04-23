#pragma once
#include <iostream>
using namespace std;
class SP
{
	float thuc, ao;
public:
	SP(float = 0, float = 0);
	void Set(float, float);
	friend SP operator+ (SP a, SP b);
	friend SP operator- (SP a, SP b);
	friend SP operator* (SP a, SP b);
	friend SP operator/ (SP a, SP b);
	friend bool operator== (SP a, SP b);
	friend bool operator!= (SP a, SP b);
	friend bool operator> (SP a, SP b);
	friend bool operator>= (SP a, SP b);
	friend bool operator< (SP a, SP b);
	friend bool operator<= (SP a, SP b);

	friend istream& operator>> (istream& is, SP& a) {
		is >> a.thuc >> a.ao;
		return is;
	}
	friend ostream& operator<< (ostream& os, SP a) {
		os << a.thuc;
		if (a.ao >= 0) {
			os << " + ";
		}
		else {
			os << " - ";
		}

		if (a.ao != 1) {
			os << abs(a.ao);
		}
		os << "i";
		return os;
	}
};

