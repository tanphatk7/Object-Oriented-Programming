#include "PS.h"
#include <iostream>
using namespace std;

PS::PS(int m, int n) {
	tu = m;
	mau = n;
}

PS PS::operator+ (PS b) {
	PS c;
	c.mau = this->mau * b.mau;
	c.tu = this->tu * b.mau + b.tu * this->mau;
	return c;
}
PS PS::operator+ (int b) {
	PS c;
	c.mau = this->mau;
	c.tu = this->tu + b * this->mau;
	return c;
}
void PS::Nhap() {
	cin >> tu >> mau;
}
void PS::Xuat() {
	cout << tu << "/" << mau << "\n";
}

PS operator+ (PS a, int b) {
	PS c;
	c.mau = a.mau;
	c.tu = a.tu + b * a.mau;
	return c;
}

int PS::getTu() {
	return tu;
}
int PS::getMau() {
	return mau;
}
void PS::setTu(int n) {
	tu = n;
}
void PS::setMau(int n) {
	mau = n;
}
void PS::Set(int m, int n) {
	tu = m;
	mau = n;
}