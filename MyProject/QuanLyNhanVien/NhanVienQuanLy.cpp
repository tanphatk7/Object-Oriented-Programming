#include "NhanVienQuanLy.h"
#include <iostream>
using namespace std;

void NhanVienQuanLy::Nhap() {
	NhanVien::Nhap();
	cout << "Hay nhap thuong: ";
	cin >> thuong;
	cout << "Hay nhap he so chuc vu: ";
	cin >> hesochucvu;
}

void NhanVienQuanLy::Xuat() {
	cout << "\n=== Nhan vien quan ly ===\n";
	NhanVien::Xuat();
	cout << "Luong: " << TinhLuong();
}

int NhanVienQuanLy::TinhLuong() {
	return luongcoban * hesochucvu + thuong;
}