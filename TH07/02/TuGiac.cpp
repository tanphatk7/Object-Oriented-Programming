#include "TuGiac.h"
#include <iostream>
using namespace std;

TuGiac::TuGiac() {
	n = 4;
	a = new Point[4];
}
TuGiac::TuGiac(const TuGiac& b) {
	n = 4;
	this->a = new Point[4];
	for (int i = 0; i < 4; i++) {
		this->a[i] = b.a[i];
	}
}
TuGiac::~TuGiac() {
	delete[] a;
}
void TuGiac::Nhap() {
	cout << "\n--Nhap Tu Giac--\n";
	for (int i = 0; i < n; i++) {
		cout << "Hay nhap diem thu " << i + 1 << ": ";
		a[i].Nhap();
	}
}
void TuGiac::Xuat() {
	cout << "\n===TU GIAC===\n";
	cout << "Toa do cua tung diem trong tu giac: ";
	for (int i = 0; i < n; i++) {
		a[i].Xuat();
		cout << "  ";
	}
	cout << "\n";
}
