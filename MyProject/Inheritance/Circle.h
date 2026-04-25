#pragma once
#include "Elip.h"
class Circle : public Elip
{
public:
	void Nhap() {
		cout << "Hay nhap toa do tam hinh tron: ";
		tam.Nhap();
		cout << "Hay nhap ban kinh hinh tron: ";
		cin >> a;
		b = a;
	}
	void Xuat() {
		cout << "\n--Hinh tron--\n";
		cout << "Tam: ";
		tam.Xuat();
		cout << "\nDien tich: " << DienTich() << "\n";
	}
};

