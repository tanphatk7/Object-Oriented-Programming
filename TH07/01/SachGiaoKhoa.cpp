#include "SachGiaoKhoa.h"
#include <string>
#include <iostream>
using namespace std;

void SachGiaoKhoa::Nhap() {
	Sach::Nhap();
	cout << "Hay nhap mon hoc cua sach: ";
	cin.ignore();
	getline(cin, monhoc);
	cout << "Sach danh cho hoc sinh lop may? ";
	cin >> lop;
}

void SachGiaoKhoa::Xuat() {
	cout << "\n---Sach giao khoa---";
	Sach::Xuat();
	cout << "\nMon hoc: " << monhoc;
	cout << "\nLop: " << lop;
}