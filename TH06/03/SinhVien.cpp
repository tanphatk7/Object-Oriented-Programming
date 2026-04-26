#include "SinhVien.h"
#include <iostream>
using namespace std;

SinhVien::SinhVien() {
	gpa = 0.0;
	loai = 1;
}

void SinhVien::Nhap() {
	ConNguoi::Nhap();
	cout << "\nHay nhap Ma So Sinh Vien: ";
	getline(cin, mssv);
	cout << "\nHay nhap Truong Dai hoc: ";
	getline(cin, truong_dai_hoc);
	do {
		cout << "\nHay nhap GPA cua Sinh Vien: ";
		cin >> gpa;
	} while (gpa < 0 || gpa > 10);
	cin.ignore();
}

void SinhVien::Xuat() {
	cout << "\n---Sinh Vien---\n";
	ConNguoi::Xuat();
	cout << "\nMa so sinh vien: " << mssv;
	cout << "\nTruong Dai hoc: " << truong_dai_hoc;
	cout << "\nGPA: " << gpa;
	cout << "\n";
}