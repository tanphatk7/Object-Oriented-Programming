#include "NhanVienSanXuat.h"
#include <iostream>
using namespace std;

void NhanVienSanXuat::Nhap() {
	NhanVien::Nhap();
	cout << "Hay nhap so san pham: ";
	cin >> sosanpham;
}

void NhanVienSanXuat::Xuat() {
	cout << "\n=== Nhan vien san xuat ===\n";
	NhanVien::Xuat();
	cout << "Luong: " << TinhLuong();
}

int NhanVienSanXuat::TinhLuong() {
	return luongcoban + sosanpham * 2000;
}