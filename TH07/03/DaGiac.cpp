#include "DaGiac.h"
#include <iostream>
using namespace std;

DaGiac::DaGiac() {
	n = 0;
	a = nullptr;
}
DaGiac::DaGiac(const DaGiac& b) {
	this->n = b.n;
	this->a = new Point[this->n];
	for (int i = 0; i < this->n; i++) {
		this->a[i] = b.a[i];
	}
}
DaGiac::~DaGiac() {
	if (a != nullptr) {
		delete[] a;
		a = nullptr;
	}
}
void DaGiac::Nhap() {
	cout << "Hay nhap so diem: ";
	cin >> n;
	a = new Point[n];
	for (int i = 0; i < n; i++) {
		cout << "Hay nhap diem thu " << i + 1 << ": ";
		a[i].Nhap();
	}
}
void DaGiac::Xuat() {
	cout << "\nSo diem cua da giac: " << n;
	cout << "\nToa do cua tung diem trong da giac: ";
	for (int i = 0; i < n; i++) {
		a[i].Xuat();
		cout << "  ";
	}
	cout << "\n";
}
void DaGiac::TinhTien(float x, float y) {
	for (int i = 0; i < n; i++) {
		a[i].TinhTien(x, y);
	}
}