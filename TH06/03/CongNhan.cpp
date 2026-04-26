#include "CongNhan.h"
#include <iostream>
using namespace std;

CongNhan::CongNhan() {
	luong = 0;
	loai = 3;
}

void CongNhan::Nhap() {
	ConNguoi::Nhap();
	cout << "\nHay nhap noi lam viec: ";
	getline(cin, noi_lam_viec);
	cout << "\nHay nhap luong moi thang (VND): ";
	cin >> luong;
	cin.ignore();
}

void CongNhan::Xuat() {
	cout << "\n---Cong Nhan---\n";
	ConNguoi::Xuat();
	cout << "\nNoi lam viec: " << noi_lam_viec;
	cout << "\nLuong: " << luong;
	cout << "\n";
}