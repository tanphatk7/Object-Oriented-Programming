#include "ConNguoi.h"
#include <iostream>
using namespace std;

int ConNguoi::getLoai() {
	return loai;
}

void ConNguoi::setLoai(int i) {
	loai = i;
}

void ConNguoi::Nhap() {
	cout << "\nHay nhap ho va ten: ";
	getline(cin, hoten);
	cout << "\nHay nhap gioi tinh: ";
	getline(cin, gioitinh);
	cout << "\nHay nhap nam sinh: ";
	cin >> namsinh;
	cout << "\nHay nhap que quan: ";
	cin.ignore();
	getline(cin, quequan);
}

void ConNguoi::Xuat() {
	cout << "Ho va ten: " << hoten;
	cout << "\nGioi tinh: " << gioitinh;
	cout << "\nTuoi: " << TinhTuoi();
	cout << "\nQue quan: " << quequan;
}