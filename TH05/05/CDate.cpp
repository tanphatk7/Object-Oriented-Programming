#include "CDate.h"
#include <iostream>
using namespace std;

bool CDate::isNamNhuan(int y) {
	return ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0));
}
int CDate::daysInMonth(int m, int y) {
	switch (m) {
	case 4: case 6: case 9: case 11:
		return 30;
	case 2:
		if (isNamNhuan(year)) return 29;
		return 28;
	default:
		return 31;
	}
}
int CDate::fromAbsoluteDay() {
	int result = day;
	for (int m = 1; m < month; m++) {
		result += daysInMonth(m, year);
	}
	result += 365 * (year - 1) + (year - 1) / 4 - (year - 1) / 100;
	return result;
}

void CDate::Chuanhoa() {
	while (day < 1) {
		if (month == 1) {
			year--;
			month = 13;
		}
		month--;
		day += daysInMonth(month, year);
	}
	while (day > daysInMonth(month, year)) {
		day -= daysInMonth(month, year);
		if (month == 12) {
			year++;
			month = 0;
		}
		month++;
	}
	while (month < 1) {
		year--;
		month += 12;
	}
	if (month > 12) {
		year += month / 12;
		month %= 12;
	}
}

bool CDate::isValidDate() {
	return (month > 0 && month <= 12 && day > 0 && day <= daysInMonth(month, year));
}

CDate::CDate(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}
void CDate::Set(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}
int CDate::getYear() {
	return year;
}
int CDate::getMonth() {
	return month;
}
int CDate::getDay() {
	return day;
}
CDate CDate::operator+(int day) {
	CDate res = *this;
	res.day += day;
	res.Chuanhoa();
	return res;
}
CDate CDate::operator-(int day) {
	CDate res = *this;
	res.day -= day;
	res.Chuanhoa();
	return res;
}
int CDate::operator-(CDate b) {
	int res = this->fromAbsoluteDay() - b.fromAbsoluteDay();
	return res;
}
CDate& CDate::operator++ () {
	this->day += 1;
	this->Chuanhoa();
	return *this;
}
CDate CDate::operator++ (int) {
	CDate t = *this;
	this->day += 1;
	this->Chuanhoa();
	return t;
}
CDate& CDate::operator-- () {
	this->day -= 1;
	this->Chuanhoa();
	return *this;
}
CDate CDate::operator-- (int) {
	CDate t = *this;
	this->day -= 1;
	this->Chuanhoa();
	return t;
}