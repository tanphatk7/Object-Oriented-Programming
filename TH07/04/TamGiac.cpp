#include "TamGiac.h"
#include <iostream>
using namespace std;

TamGiac::TamGiac() {
	n = 3;
	a = new Point[3];
}
TamGiac::TamGiac(const TamGiac& b) {
	n = 3;
	this->a = new Point[3];
	for (int i = 0; i < 3; i++) {
		this->a[i] = b.a[i];
	}
}
TamGiac::~TamGiac() {
	delete[] a;
}
void TamGiac::Nhap() {
	cout << "\n--Nhap Tam Giac--\n";
	for (int i = 0; i < n; i++) {
		cout << "Hay nhap diem thu " << i + 1 << ": ";
		a[i].Nhap();
	}
}
void TamGiac::Xuat() {
	cout << "\n===TAM GIAC===\n";
	cout << "Toa do cua tung diem trong tam giac: ";
	for (int i = 0; i < n; i++) {
		a[i].Xuat();
		cout << "  ";
	}
	cout << "\n";
}
