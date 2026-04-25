#pragma once
#include "Point.h"
class Elip
{
protected:
	Point tam;
	float a, b;
	float DienTich() {
		return (float)3.141592653 * a * b;
	}
public:
	Elip() : tam(0,0), a(0), b(0) {};
	void Nhap() {
		cout << "Hay nhap toa do tam hinh Elip: ";
		tam.Nhap();
		cout << "Hay nhap do dai ban truc lon (a): ";
		cin >> a;
		cout << "Hay nhap do dai ban truc be (b): ";
		cin >> b;
	}
	void Xuat() {
		cout << "\n--Hinh elip--\n";
		cout << "Tam: ";
		tam.Xuat();
		cout << "\nDien tich: " << DienTich() << "\n";
	}
};

