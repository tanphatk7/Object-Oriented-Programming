#include "CTime.h"
#include "CTimeSpan.h"

void CTime::ChuanHoa() {
	if (s > 60) {
		m += s / 60;
		s %= 60;
	}
	else if (s < 0) {
		int n = (s + 1) / 60 - 1;
		m += n;
		s += (-n) * 60;
	}
	if (m > 60) {
		h += m / 60;
		m %= 60;
	}
	else if (m < 0) {
		int n = (m + 1) / 60 - 1;
		h += n;
		m += (-n) * 60;
	}
	if (h >= 24) {
		h %= 24;
	}
	else if (h < 0) {
		int n = (h + 1) / 24 - 1;
		h += (-n) * 24;
	}
}

CTime::CTime(int totalsec) {
	h = totalsec / 3600;
	m = (totalsec % 3600) / 60;
	s = totalsec % 60;
}
CTime::CTime(int gio, int phut, int giay) {
	Set(gio, phut, giay);
}
void CTime::Set(int gio, int phut, int giay) {
	h = gio;
	m = phut;
	s = giay;
	this->ChuanHoa();
}
CTime operator+ (CTime a, CTime b) {
	CTime c;
	c.h = a.h + b.h;
	c.m = a.m + b.m;
	c.s = a.s + b.s;
	c.ChuanHoa();
	return c;
}
CTimeSpan operator- (CTime a, CTime b) {
	int x = a.h - b.h;
	int y = a.m - b.m;
	int z = a.s - b.s;
	CTimeSpan c(x, y, z);
	return c;
}
CTime& CTime::operator++ () {
	this->s += 1;
	this->ChuanHoa();
	return *this;
}
CTime CTime::operator++ (int) {
	CTime t = *this;
	this->s += 1;
	this->ChuanHoa();
	return t;
}
CTime& CTime::operator-- () {
	this->s -= 1;
	this->ChuanHoa();
	return *this;
}
CTime CTime::operator-- (int) {
	CTime t = *this;
	this->s -= 1;
	this->ChuanHoa();
	return t;
}

int CTime::getHour() {
	return h;
}
int CTime::getMinute() {
	return m;
}
int CTime::getSecond() {
	return s;
}
int CTime::TotalSeconds() {
	return h * 3600 + m * 60 + s;
}