#include "NgheSi.h"
#include <iostream>
using namespace std;

NgheSi::NgheSi() {
	so_tac_pham = 0;
	loai = 4;
}

void NgheSi::Nhap() {
	ConNguoi::Nhap();
	cout << "\nHay nhap linh vuc nghe thuat: ";
	getline(cin, linh_vuc);
	cout << "\nHay nhap so tac pham da tao: ";
	cin >> so_tac_pham;
	cin.ignore();
}

void NgheSi::Xuat() {
	cout << "\n---Nghe Si---\n";
	ConNguoi::Xuat();
	cout << "\nLinh vuc nghe thuat: " << linh_vuc;
	cout << "\nSo tac pham: " << so_tac_pham;
	cout << "\n";
}