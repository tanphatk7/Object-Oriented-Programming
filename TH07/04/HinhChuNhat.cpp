#include "HinhChuNhat.h"
#include <iostream>
using namespace std;

HinhChuNhat::HinhChuNhat(const HinhChuNhat& b) {
	n = 4;
	this->a = new Point[4];
	for (int i = 0; i < 4; i++) {
		this->a[i] = b.a[i];
	}
}

void HinhChuNhat::Nhap() {
	cout << "\n--Nhap hinh chu nhat--\n";
	cout << "Hay nhap toa do diem goc duoi trai: ";
	a[0].Nhap();
	int x, y;
	cout << "Hay nhap chieu dai: ";
	cin >> x;
	cout << "Hay nhap chieu cao: ";
	cin >> y;
	a[1] = Point(a[0].getX(), a[0].getY() + y);
	a[2] = Point(a[0].getX() + x, a[0].getY() + y);
	a[3] = Point(a[0].getX() + x, a[0].getY());
}
void HinhChuNhat::Xuat() {
	cout << "\n===HINH CHU NHAT===\n";
	cout << "Toa do cua tung diem trong hinh chu nhat: ";
	for (int i = 0; i < n; i++) {
		a[i].Xuat();
		cout << "  ";
	}
	cout << "\n";
}
