#pragma once
#include <iostream>
using namespace std;
class CDate
{
	int day, month, year;
	bool isNamNhuan(int);
	int daysInMonth(int, int);
	int fromAbsoluteDay(); // Hàm tính khoảng cách ngày hiện tại so với ngày 01/01/0001
	void Chuanhoa();
public:
	CDate(int = 1, int = 1, int = 2000);
	void Set(int, int, int);
	int getYear();
	int getMonth();
	int getDay();
	CDate operator+(int day);
	CDate operator-(int day);
	int operator-(CDate b);
	CDate& operator++ ();
	CDate operator++ (int);
	CDate& operator-- ();
	CDate operator-- (int);
	friend istream& operator>> (istream& is, CDate& a) {
		is >> a.day >> a.month >> a.year;
		return is;
	}
	friend ostream& operator<< (ostream& os, CDate a) {
		os << a.day << "/" << a.month << "/" << a.year;
		return os;
	}
	bool isValidDate();
};

