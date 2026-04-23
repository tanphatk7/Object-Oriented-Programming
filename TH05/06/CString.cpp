#include "CString.h"
#include <iostream>
using namespace std;

CString::CString(const CString& b) {
	this->n = b.n;
	kytu = new char[this->n+1];
	for (int i = 0; i < this->n; i++) {
		this->kytu[i] = b.kytu[i];
	}
	this->kytu[this->n] = '\0';
}
CString::CString(const char* s) {
	this->n = (int)strlen(s);
	kytu = new char[this->n + 1];
	for (int i = 0; i < this->n; i++) {
		this->kytu[i] = s[i];
	}
	this->kytu[this->n] = '\0';
}
CString::~CString() {
	delete[] kytu;
}
CString CString::operator+ (const CString& b) {
	CString res;
	delete[] res.kytu;
	res.n = this->n + b.n;
	res.kytu = new char[res.n + 1];

	int index = 0;
	for (int i = 0; i < this->n; i++) {
		res.kytu[index++] = this->kytu[i];
	}
	for (int i = 0; i < b.n; i++) {
		res.kytu[index++] = b.kytu[i];
	}
	res.kytu[index] = '\0';

	return res;
}
CString& CString::operator= (const CString& b) {
	delete[] kytu;
	this->n = b.n;
	this->kytu = new char[b.n + 1];
	for (int i = 0; i < n; i++) {
		this->kytu[i] = b.kytu[i];
	}
	this->kytu[this->n] = '\0';
	return *this;
}
bool CString::operator== (const CString& b) {
	int i = 0;
	while (this->kytu[i] != '\0' && this->kytu[i] == b.kytu[i]) {
		i++;
	}
	return (this->kytu[i] - b.kytu[i]) == 0;
}
bool CString::operator!= (const CString& b) {
	int i = 0;
	while (this->kytu[i] != '\0' && this->kytu[i] == b.kytu[i]) {
		i++;
	}
	return (this->kytu[i] - b.kytu[i]) != 0;
}
bool CString::operator< (const CString& b) {
	int i = 0;
	while (this->kytu[i] != '\0' && this->kytu[i] == b.kytu[i]) {
		i++;
	}
	return (this->kytu[i] - b.kytu[i]) < 0;
}
bool CString::operator> (const CString& b) {
	int i = 0;
	while (this->kytu[i] != '\0' && this->kytu[i] == b.kytu[i]) {
		i++;
	}
	return (this->kytu[i] - b.kytu[i]) > 0;
}
bool CString::operator>= (const CString& b) {
	int i = 0;
	while (this->kytu[i] != '\0' && this->kytu[i] == b.kytu[i]) {
		i++;
	}
	return (this->kytu[i] - b.kytu[i]) >= 0;
}
bool CString::operator<= (const CString& b) {
	int i = 0;
	while (this->kytu[i] != '\0' && this->kytu[i] == b.kytu[i]) {
		i++;
	}
	return (this->kytu[i] - b.kytu[i]) <= 0;
}

int CString::getLength() {
	return n;
}