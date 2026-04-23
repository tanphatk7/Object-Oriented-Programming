#include "ThoiGian.h"
#include <iostream>
using namespace std;

ThoiGian::ThoiGian(int h = 0, int m = 0, int s = 0) {
	int* gio = new int(h);
	int* phut = new int(m);
	int* giay = new int(s);
}
ThoiGian::~ThoiGian() {

}

bool ThoiGian::valid(int h, int m, int s) {
	if (h < 0 || h > 23 || m < 0 || m > 59 || s < 0 || s > 59) {
		return false;
	}
	return true;
}

void ThoiGian::Nhap() {
	do {
		cout << "Hay nhap gio: "; cin >> gio;
		cout << "Hay nhap phut: "; cin >> phut;
		cout << "Hay nhap giay: "; cin >> giay;
	} while (valid(gio, phut, giay));
}

void ThoiGian::Xuat() {
	cout << gio << ":" << phut << ":" << giay;
}

int ThoiGian::getGio() {
	return gio;
}
int ThoiGian::getPhut() {
	return phut;
}
int ThoiGian::getGiay() {
	return giay;
}
void ThoiGian::setGio(int h) {
	gio = h;
}
void ThoiGian::setPhut(int m) {
	phut = m;
}
void ThoiGian::setGiay(int s) {
	giay = s;
}
void ThoiGian::set(int h, int m, int s) {
	gio = h;
	phut = m;
	giay = s;
}

void ThoiGian::Tang(int s) {
	giay += s;
	ResetTime();
}

void ThoiGian::Giam(int s) {
	giay -= s;
	ResetTime();
}

int ThoiGian::TongGiay() {
	return gio * 3600 + phut * 60 + giay;
}

void ThoiGian::ResetTime() {
	if (giay > 59) {
		phut += giay / 60;
		giay %= 60;
		if (phut > 59) {
			gio += phut / 60;
			phut %= 60;
			if (gio > 23) {
				gio %= 24;
			}
		}
	}
	else if (giay < 0) {
		int minloss = (abs(giay) - 1) / 60 + 1;
		phut -= minloss;
		giay += 60 * minloss;
		if (phut < 0) {
			int hourloss = (abs(phut) - 1) / 60 + 1;
			gio -= hourloss;
			giay += 60 * hourloss;
			while (gio < 0) {
				gio += 24;
			}
		}
	}
}