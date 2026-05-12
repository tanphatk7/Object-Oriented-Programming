#include "HinhVuong.h"
#include <iostream>
using namespace std;

HinhVuong::HinhVuong(const HinhVuong& b) {
	n = 4;
	this->a = new Point[4];
	for (int i = 0; i < 4; i++) {
		this->a[i] = b.a[i];
	}
}

void HinhVuong::Nhap() {
	cout << "\n--Nhap hinh vuong--\n";
	cout << "Hay nhap toa do diem goc duoi trai: ";
	a[0].Nhap();
	cout << "Hay nhap do dai canh hinh vuong: ";
	float x;
	cin >> x;
	a[1] = Point(a[0].getX(), a[0].getY() + x);
	a[2] = Point(a[0].getX() + x, a[0].getY() + x);
	a[3] = Point(a[0].getX() + x, a[0].getY());
}
void HinhVuong::Xuat() {
	cout << "\n===HINH VUONG===\n";
	cout << "Toa do cua tung diem trong hinh vuong: ";
	for (int i = 0; i < n; i++) {
		a[i].Xuat();
		cout << "  ";
	}
	cout << "\n";
}
