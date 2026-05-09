#include "NhanVienVanPhong.h"
#include <iostream>
using namespace std;

void NhanVienVanPhong::Nhap() {
	NhanVien::Nhap();
	cout << "Hay nhap so tien tro cap: ";
	cin >> trocap;
	cout << "Hay nhap so ngay lam viec: ";
	cin >> songaylamviec;
}

void NhanVienVanPhong::Xuat() {
	cout << "\n=== Nhan vien van phong ===\n";
	NhanVien::Xuat();
	cout << "Luong: " << TinhLuong();
}

int NhanVienVanPhong::TinhLuong() {
	return luongcoban + songaylamviec * 200000 + trocap;
}