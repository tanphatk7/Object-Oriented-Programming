#include "NhanVien.h"
#include <string>
#include <iostream>
using namespace std;

void NhanVien::Nhap() {
	cout << "\n- Thong tin co ban -\n";
	cout << "Ho va ten: ";
	getline(cin, HoTen);
	cout << "Nam sinh: ";
	cin >> namsinh;
	cout << "Luong co ban: ";
	cin >> luongcoban;
}

void NhanVien::Xuat() {
	cout << "Ho va ten: " << HoTen;
	cout << "\nNam sinh: " << namsinh << "\n";
}

string NhanVien::getHoTen() {
	return HoTen;
}