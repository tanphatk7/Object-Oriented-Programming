#include "NhanVienVanPhong.h"
#include <iostream>
#include <string>
using namespace std;

void NhanVienVanPhong::Nhap() {
	cout << "Hay nhap ho ten nhan vien van phong: ";
	cin.ignore();
	getline(cin, hoten);
	cout << "Hay nhap ngay thang nam sinh: ";
	getline(cin, ngaysinh);
	cout << "Hay nhap so ngay lam viec: ";
	cin >> so_ngay_lam_viec;
}
void NhanVienVanPhong::Xuat() {
	cout << "\n--Nhan vien van phong--\n";
	cout << "Ho va ten: " << hoten;
	cout << "\nNgay sinh: " << ngaysinh;
	cout << "\nLuong: " << luong << "\n";
}
void NhanVienVanPhong::TinhLuong() {
	luong = 100000 * so_ngay_lam_viec;
}