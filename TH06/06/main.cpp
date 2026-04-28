#include "GiaSuc.h"
#include "Bo.h"
#include "De.h"
#include "Cuu.h"
#include <iostream>
using namespace std;

int main() {
	srand((unsigned int)time(nullptr));
	Bo b;
	Cuu c;
	De d;
	cout << "=====QUAN LY TRANG TRAI=====\n";
	b.Nhap();
	c.Nhap();
	d.Nhap();

	cout << "\n[a] Nguoi chu di vang, nhung tieng keu nghe duoc trong nong trai:\n";
	for (int i = 0; i < b.getQuantity(); i++) {
		b.MakeSound();
	}
	for (int i = 0; i < c.getQuantity(); i++) {
		c.MakeSound();
	}
	for (int i = 0; i < d.getQuantity(); i++) {
		d.MakeSound();
	}

	cout << "\n\n[b] Thong ke nong trai sau 1 lua sinh va mot lua cho sua:";
	cout << "\nSo luong bo ban dau: "; b.Xuat();
	cout << "\nSo luong cuu ban dau: "; c.Xuat();
	cout << "\nSo luong de ban dau: "; d.Xuat();

	b.GiveMilk();
	c.GiveMilk();
	d.GiveMilk();
	b.Breed();
	c.Breed();
	d.Breed();

	cout << "\n\n---Tong so luong gia suc sau mot lua sinh---";
	cout << "\nSo luong bo: "; b.Xuat();
	cout << "\nSo luong cuu: "; c.Xuat();
	cout << "\nSo luong de: "; d.Xuat();

	cout << "\n\n---Tong so lit sua thu duoc---";
	cout << "\nSua bo: " << b.getMilk();
	cout << "\nSua cuu: " << c.getMilk();
	cout << "\nSua de: " << d.getMilk();
	int tong = b.getMilk() + c.getMilk() + d.getMilk();
	cout << "\nTong cong: " << tong << "\n";

	system("pause");
	return 0;
}