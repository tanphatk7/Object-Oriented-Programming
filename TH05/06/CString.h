#pragma once
#include <iostream>
using namespace std;
class CString
{
	char* kytu;
	int n;
public:
	CString(const CString& b);
	CString(const char* = "");
	~CString();
	int getLength();
	CString operator+ (const CString& b);
	CString& operator= (const CString& b);
	bool operator== (const CString& b);
	bool operator!= (const CString& b);
	bool operator< (const CString& b);
	bool operator> (const CString& b);
	bool operator<= (const CString& b);
	bool operator>= (const CString& b);
	friend istream& operator>> (istream& is, CString& a) {
		char temp[500];
		is >> ws;
		is.getline(temp, 500);
		
		a = CString(temp);
		return is;
	}
	friend ostream& operator<< (ostream& os, const CString& a) {
		os << a.kytu;
		return os;
	}
};

