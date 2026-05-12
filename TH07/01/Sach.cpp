#include "Sach.h"
#include <string>
#include <iostream>
using namespace std;

void Sach::Nhap() {
	cout << "\n- Hay nhap thong tin sach -\n";
	cout << "Hay nhap ten: ";
	getline(cin, ten);
	cout << "Hay nhap Nha Xuat Ban: ";
	getline(cin, nxb);
	cout << "Hay nhap nam xuat ban: ";
	cin >> nam;
	cout << "Hay nhap gia ban: ";
	cin >> giaban;
}

void Sach::Xuat() {
	cout << "\nTen: " << ten;
	cout << "\nNha Xuat Ban: " << nxb;
	cout << "\nNam xuat ban: " << nam;
	cout << "\nGia ban: " << giaban;
}

int Sach::getGiaBan() {
	return giaban;
}