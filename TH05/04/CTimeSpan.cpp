#include "CTimeSpan.h"

CTimeSpan::CTimeSpan(int gio, int phut, int giay) {
	totalSec = gio * 3600 + phut * 60 + giay;
}
CTimeSpan::CTimeSpan(int totalsec) {
	totalSec = totalsec;
}
CTimeSpan operator+ (CTimeSpan a, CTimeSpan b) {
	CTimeSpan c(a.totalSec + b.totalSec);
	return c;
}
CTimeSpan operator- (CTimeSpan a, CTimeSpan b) {
	CTimeSpan c(a.totalSec - b.totalSec);
	return c;
}
bool operator== (CTimeSpan a, CTimeSpan b) {
	return (a.totalSec == b.totalSec);
}
bool operator!= (CTimeSpan a, CTimeSpan b) {
	return (a.totalSec != b.totalSec);
}
bool operator> (CTimeSpan a, CTimeSpan b) {
	return (a.totalSec > b.totalSec);
}
bool operator< (CTimeSpan a, CTimeSpan b) {
	return (a.totalSec < b.totalSec);
}
bool operator>= (CTimeSpan a, CTimeSpan b) {
	return (a.totalSec >= b.totalSec);
}
bool operator<= (CTimeSpan a, CTimeSpan b) {
	return (a.totalSec <= b.totalSec);
}

void CTimeSpan::Set(int h, int m, int s) {
	totalSec = h * 3600 + m * 60 + s;
}
int CTimeSpan::getHour() {
	return totalSec / 3600;
}
int CTimeSpan::getMinute() {
	return (totalSec % 3600) / 60;
}
int CTimeSpan::getSecond() {
	return totalSec % 60;
}
int CTimeSpan::TotalSeconds() {
	return totalSec;
}