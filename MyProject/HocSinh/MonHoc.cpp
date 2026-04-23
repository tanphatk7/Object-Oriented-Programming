#include "MonHoc.h"
#include <iostream>
#include <string>
using namespace std;

MonHoc::MonHoc(string name, float gpa, int tin, bool check) {
	ten = name;
	GPA = gpa;
	tinChi = tin;
	isDone = check;
}

void MonHoc::Nhap() {
	cin.ignore();
	cout << "Ten mon hoc: ";
	getline(cin, ten);

	cout << "\nSo tin chi: ";
	cin >> tinChi;

	do {
		cout << "\nDiem trung binh mon (GPA, thang diem 10): ";
		cin >> GPA;
	} while (GPA < 0 || GPA > 10);

	isDone = true;
}
void MonHoc::Xuat() {
	if (isDone) {
		cout << "\n--- Ket qua mon hoc ---\n";
		cout << "Ten mon hoc: " << ten;
		cout << "\nSo tin chi: " << tinChi;
		cout << "\nGPA: " << GPA;
		cout << "\nTong ket: ";
		if (GPA >= 5) {
			cout << "Hoan thanh";
		}
		else cout << "Chua hoan thanh";
		cout << "\n";
	}
}

float MonHoc::getGPA() {
	return GPA;
}