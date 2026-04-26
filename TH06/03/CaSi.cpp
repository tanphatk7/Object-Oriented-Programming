#include "CaSi.h"
#include <iostream>
using namespace std;

CaSi::CaSi() {
	so_tac_pham = 0;
	loai = 5;
}

void CaSi::Nhap() {
	ConNguoi::Nhap();
	cout << "\nHay nhap the loai nhac: ";
	getline(cin, the_loai_nhac);
	cout << "\nHay nhap so tac pham da tao: ";
	cin >> so_tac_pham;
	cin.ignore();
}

void CaSi::Xuat() {
	cout << "\n---Ca Si---\n";
	ConNguoi::Xuat();
	cout << "\nThe loai nhac: " << the_loai_nhac;
	cout << "\nSo tac pham: " << so_tac_pham;
	cout << "\n";
}