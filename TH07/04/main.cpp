#include "DaGiac.h"
#include "TamGiac.h"
#include "TuGiac.h"
#include "HinhBinhHanh.h"
#include "HinhChuNhat.h"
#include "HinhVuong.h"
#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Hay nhap so da giac: ";
	cin >> n;
	DaGiac **a = new DaGiac* [n];
	for (int i = 0; i < n; i++) {
		int select;
		cout << "\n===NHAP HINH DA GIAC===";
		cout << "\n1.Tu giac   2.Tam giac   3.Hinh binh hanh   4.Hinh chu nhat   5.Hinh vuong";
		cout << "\nLua chon loai da giac (1-5): ";
		cin >> select;
		while (select < 1 || select > 5) {
			cout << "Lua chon khong hop le. Vui long nhap lai (1-5): ";
			cin >> select;
		}

		switch (select) {
		case 1:
			a[i] = new TuGiac;
			break;
		case 2:
			a[i] = new TamGiac;
			break;
		case 3:
			a[i] = new HinhBinhHanh;
			break;
		case 4:
			a[i] = new HinhChuNhat;
			break;
		case 5:
			a[i] = new HinhVuong;
			break;
		}
		a[i]->Nhap();
	}


	float x, y;
	cout << "Hay nhap toa do tinh tien cac hinh theo Ox va Oy: ";
	cin >> x >> y;

	cout << "\n===DANH SACH CAC DA GIAC SAU KHI TINH TIEN===\n";
	for (int i = 0; i < n; i++) {
		a[i]->TinhTien(x, y);
		a[i]->Xuat();
	}
	cout << "\n";

	system("pause");
	return 0;
}