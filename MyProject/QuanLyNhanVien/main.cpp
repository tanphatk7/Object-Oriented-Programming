#include "NhanVien.h"
#include "QuanLyNhanVien.h"
#include <iostream>
using namespace std;

int main() {
	QuanLyNhanVien a;
	a.Nhap();
	a.Xuat();
	cout << "\nTong luong: " << a.TinhTongLuong(0);
	cout << "\nTong luong Nhan Vien Van Phong: " << a.TinhTongLuong(1);
	cout << "\nTong luong Nhan Vien San Xuat: " << a.TinhTongLuong(2);
	cout << "\nTong luong Nhan Vien Quan Ly: " << a.TinhTongLuong(3);
	
	string s;
	cin.ignore();
	cout << "\nHay nhap ten nhan vien can tim: ";
	getline(cin, s);
	NhanVien* res = a.FindNhanVien(s);
	if (res != nullptr) {
		cout << "Da tim thay! Thong tin co ban:\n";
		res->Xuat(); // Có thể mở rộng là xuất thông tin người này thuộc loại nhân viên nào
	}
	else cout << "Khong tim thay!";

	cout << "\n";
	system("pause");
	return 0;
}