#include "TapChi.h"
#include <string>
#include <iostream>
using namespace std;

void TapChi::Nhap() {
	Sach::Nhap();
	cout << "Hay chu de cua tap chi: ";
	cin.ignore();
	getline(cin, chude);
	cout << "Hay nhap thang phat hanh tap chi: ";
	cin >> thangphathanh;
}

void TapChi::Xuat() {
	cout << "\n---Tap chi---";
	Sach::Xuat();
	cout << "\nChu de: " << chude;
	cout << "\nThang phat hanh: " << thangphathanh;
}