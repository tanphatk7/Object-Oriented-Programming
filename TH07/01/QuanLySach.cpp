#include "QuanLySach.h"
#include "SachGiaoKhoa.h"
#include "TapChi.h"
#include "TieuThuyet.h"
#include <iostream>
using namespace std;

QuanLySach::QuanLySach() {
	n = 0;
	a = nullptr;
}
QuanLySach::~QuanLySach() {
	delete[] a;
}
void QuanLySach::Nhap() {
	cout << "Hay nhap so sach: ";
	cin >> n;
	a = new Sach * [n];
	int select;
	for (int i = 0; i < n; i++) {
		cout << "\n- HAY CHON LOAI SACH -";
		cout << "\n1.Sach giao khoa   2.Tieu thuyet   3.Tap Chi\n";
		cout << "Hay lua chon doi tuong (1-3): ";
		cin >> select;
		while (select < 1 || select > 3) {
			cout << "Lua chon khong hop le. Vui long nhap lai (1-3): ";
			cin >> select;
		}
		cin.ignore();
		switch (select) {
		case 1:
			a[i] = new SachGiaoKhoa;
			break;
		case 2:
			a[i] = new TieuThuyet;
			break;
		case 3:
			a[i] = new TapChi;
			break;
		}
		a[i]->Nhap();
	}
}
void QuanLySach::Xuat() {
	cout << "\n===DANH SACH QUAN LY CAC LOAI SACH===";
	cout << "\nTong so sach: " << n;
	cout << "\nTong so tien: " << TongTien() << "\n";
	for (int i = 0; i < n; i++) {
		a[i]->Xuat();
		cout << "\n";
	}
}
int QuanLySach::TongTien() {
	int res = 0;
	for (int i = 0; i < n; i++) {
		res += a[i]->getGiaBan();
	}
	return res;
}