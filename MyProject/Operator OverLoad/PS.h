#pragma once
#include <iostream>
using namespace std;
class PS
{
	int tu, mau;
public:
	PS(int = 0, int = 1);
	PS operator+ (PS b);
	PS operator+ (int b);
	friend PS operator+ (PS a, int b);
	void Nhap();
	void Xuat();
	int getTu();
	int getMau();
	void setTu(int);
	void setMau(int);
	void Set(int m, int n);
	PS(int n) { Set(n, 1); } // Ép kiểu 1 số nguyên thành 1 phân số có mẫu là 1
	operator double() const { return double(tu) / mau; } // Ép kiểu từ phân số sang double
	PS& operator= (const PS& b) {
		this->tu = b.tu;
		return *this;
	}
	friend istream& operator>> (istream& is, PS& a) {
		is >> a.tu >> a.mau;
		return is;
	}
	friend ostream& operator<< (ostream& os, PS a) {
		os << a.tu << "/" << a.mau << endl;
		return os;
	}
};