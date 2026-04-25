#include "NhanVienSanXuat.h"
#include <iostream>
#include <string>
using namespace std;

void NhanVienSanXuat::Nhap() {
	cout << "Hay nhap ho ten nhan vien san xuat: ";
	getline(cin, hoten);
	cout << "Hay nhap ngay thang nam sinh: ";
	getline(cin, ngaysinh);
	cout << "Hay nhap luong co ban: ";
	cin >> luong_co_ban;
	cout << "Hay nhap so san pham: ";
	cin >> so_san_pham;
}
void NhanVienSanXuat::Xuat() {
	cout << "\n--Nhan vien san xuat--\n";
	cout << "Ho va ten: " << hoten;
	cout << "\nNgay sinh: " << ngaysinh;
	cout << "\nLuong: " << luong << "\n";
}
void NhanVienSanXuat::TinhLuong() {
	luong = luong_co_ban + so_san_pham * 5000;
}