#include "TieuThuyet.h"
#include <string>
#include <iostream>
using namespace std;

void TieuThuyet::Nhap() {
	Sach::Nhap();
	cout << "Hay nhap tac gia cua tieu thuyet: ";
	cin.ignore();
	getline(cin, tacgia);
	cout << "Hay nhap the loai tieu thuyet: ";
	getline(cin, theloai);
}

void TieuThuyet::Xuat() {
	cout << "\n---Tieu thuyet---";
	Sach::Xuat();
	cout << "\nTac gia: " << tacgia;
	cout << "\nThe loai: " << theloai;
}