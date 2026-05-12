#include "HinhBinhHanh.h"
#include <iostream>
using namespace std;

HinhBinhHanh::HinhBinhHanh(const HinhBinhHanh& b) {
	n = 4;
	this->a = new Point[4];
	for (int i = 0; i < 4; i++) {
		this->a[i] = b.a[i];
	}
}

void HinhBinhHanh::Nhap() {
	cout << "\n--Nhap hinh binh hanh--\n";
	cout << "Hay nhap toa do diem goc duoi trai: ";
	a[0].Nhap();
	cout << "Hay nhap toa do diem goc tren trai: ";
	a[1].Nhap();
	cout << "Hay nhap toa do diem goc duoi phai: ";
	a[3].Nhap();
	a[2] = Point(a[3].getX() - a[0].getX() + a[1].getX(), a[1].getY());
}
void HinhBinhHanh::Xuat() {
	cout << "\n===HINH BINH HANH===\n";
	cout << "Toa do cua tung diem trong hinh binh hanh: ";
	for (int i = 0; i < n; i++) {
		a[i].Xuat();
		cout << "  ";
	}
	cout << "\n";
}
