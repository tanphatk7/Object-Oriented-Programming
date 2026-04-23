#pragma once
#include <iostream>
using namespace std;
class CTimeSpan
{
	int totalSec;
public:
	CTimeSpan(int = 0);
	CTimeSpan(int, int, int);
	friend CTimeSpan operator+ (CTimeSpan a, CTimeSpan b);
	friend CTimeSpan operator- (CTimeSpan a, CTimeSpan b);
	friend bool operator== (CTimeSpan a, CTimeSpan b);
	friend bool operator!= (CTimeSpan a, CTimeSpan b);
	friend bool operator> (CTimeSpan a, CTimeSpan b);
	friend bool operator>= (CTimeSpan a, CTimeSpan b);
	friend bool operator< (CTimeSpan a, CTimeSpan b);
	friend bool operator<= (CTimeSpan a, CTimeSpan b);
	friend istream& operator>> (istream& is, CTimeSpan& a) {
		int h, m, s;
		is >> h >> m >> s;
		a.totalSec = h * 3600 + m * 60 + s;
		return is;
	}
	friend ostream& operator<< (ostream& os, CTimeSpan a) { 
		if (a.totalSec < 0) {
			os << "-";
		}
		int total = abs(a.totalSec);
		int h = total / 3600;
		int m = (total % 3600) / 60;
		int s = total % 60;
		os << h << "h " << m << "m " << s << "s ";
		return os;
	}
	void Set(int, int, int);
	int getHour();
	int getMinute();
	int getSecond();
	int TotalSeconds();
};

