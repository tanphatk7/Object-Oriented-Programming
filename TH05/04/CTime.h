#pragma once
#include <iostream>
#include "CTimeSpan.h"
using namespace std;
class CTime
{
	int h, m, s;
public:
	CTime(int, int, int);
	CTime(int = 0);
	friend CTime operator+ (CTime a, CTime b);
	friend CTimeSpan operator- (CTime a, CTime b);
	CTime& operator++ ();
	CTime operator++ (int);
	CTime& operator-- ();
	CTime operator-- (int);
	void ChuanHoa();
	friend istream& operator>> (istream& is, CTime& a) {
		is >> a.h >> a.m >> a.s;
		return is;
	}
	friend ostream& operator<< (ostream& os, CTime a) {
		os << a.h << ":" << a.m << ":" << a.s;
		return os;
	}
	void Set(int, int, int);
	int getHour();
	int getMinute();
	int getSecond();
	int TotalSeconds();
};

