#include "HinhChuNhat.h"
#include <GL/glut.h>
#include <iostream>
using namespace std;

HinhChuNhat::HinhChuNhat() {
	Diem = new Point[4];
	cao = 0;
	duoi = 0;
	tren = duoi;
	for (int i = 0; i < 4; i++) {
		Diem[i] = Point(0, 0);
	}
}
void HinhChuNhat::Nhap() {
	cout << "Hay nhap toa do diem goc duoi trai cua hinh chu nhat: ";
	Diem[0].Nhap();
	cout << "Hay nhap do dai day: ";
	cin >> duoi;
	tren = duoi;
	cout << "Hay nhap chieu cao hinh chu nhat: ";
	cin >> cao;

	Diem[1] = Point(Diem[0].getX(), Diem[0].getY() + cao);
	Diem[2] = Point(Diem[0].getX() + duoi, Diem[0].getY() + cao);
	Diem[3] = Point(Diem[0].getX() + duoi, Diem[0].getY());
}
void HinhChuNhat::Xuat() {
	cout << "\n-----HINH CHU NHAT-----";
	cout << "\nDo dai day: " << duoi;
	cout << "\nChieu cao: " << getCao();
	cout << "\nToa do cac diem hinh chu nhat: ";
	for (int i = 0; i < 4; i++) {
		Diem[i].Xuat();
		cout << "  ";
	}
	cout << "\n";
}
float HinhChuNhat::getDay() {
	return duoi;
}
float HinhChuNhat::getCao() {
	return Diem[1].getY() - Diem[0].getY();
}
void HinhChuNhat::setDuoiTrai(const Point& a) {
	Diem[0] = a;
	Diem[1] = Point(Diem[0].getX(), Diem[0].getY() + cao);
	Diem[2] = Point(Diem[0].getX() + duoi, Diem[0].getY() + cao);
	Diem[3] = Point(Diem[0].getX() + duoi, Diem[0].getY());
}
void HinhChuNhat::setDay(float n) {
	duoi = n;
	tren = n;
	Diem[3] = Point(Diem[0].getX() + duoi, Diem[0].getY());
	Diem[2] = Point(Diem[1].getX() + tren, Diem[1].getY());
}
void HinhChuNhat::setCao(float n) {
	cao = n;
	Diem[1] = Point(Diem[0].getX(), Diem[0].getY() + cao);
	Diem[2] = Point(Diem[3].getX(), Diem[3].getY() + cao);
}