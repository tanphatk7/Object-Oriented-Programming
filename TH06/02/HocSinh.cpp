#include "HocSinh.h"
#include <iostream>
using namespace std;

HocSinh::HocSinh() {
	lop = 1;
	dtb = 0.0;
	loai = 2;
}

void HocSinh::Nhap() {
	ConNguoi::Nhap();
	cout << "\nHay nhap Ma So Hoc Sinh: ";
	getline(cin, mshs);
	cout << "\nHay nhap truong hoc: ";
	getline(cin, truong);
	do {
		cout << "\nHoc sinh dang hoc lop may? ";
		cin >> lop;
	} while (lop < 1 || lop > 12);
	do {
		cout << "\nHay nhap Diem trung binh cua Hoc Sinh: ";
		cin >> dtb;
	} while (dtb < 0 || dtb > 10);
	cin.ignore();
}

void HocSinh::Xuat() {
	cout << "\n---Hoc Sinh---\n";
	ConNguoi::Xuat();
	cout << "\nMa so Hoc Sinh: " << mshs;
	cout << "\nTruong: " << truong;
	cout << "\nLop: " << lop;
	cout << "\nDiem trung binh: " << dtb;
	cout << "\n";
}