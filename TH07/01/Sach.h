#pragma once
#include <string>
using namespace std;
class Sach
{
protected:
	string ten;
	string nxb;
	int nam;
	int giaban;
public:
	Sach() : ten(""), nxb(""), nam(2026), giaban(0) {}
	virtual void Nhap();
	virtual void Xuat();
	int getGiaBan();
};

