#include "HinhVuong.h"
#include <GL/glut.h>
#include <iostream>
using namespace std;

HinhVuong::HinhVuong() {
	Diem = new Point[4];
	duoi = 0;
	cao = duoi;
	tren = duoi;
	for (int i = 0; i < 4; i++) {
		Diem[i] = Point(0, 0);
	}
}
void HinhVuong::Nhap() {
	cout << "Hay nhap toa do diem goc duoi trai cua hinh vuong: ";
	Diem[0].Nhap();
	cout << "Hay nhap do dai canh: ";
	cin >> duoi;
	tren = duoi;
	cao = duoi;

	Diem[1] = Point(Diem[0].getX(), Diem[0].getY() + cao);
	Diem[2] = Point(Diem[0].getX() + duoi, Diem[0].getY() + cao);
	Diem[3] = Point(Diem[0].getX() + duoi, Diem[0].getY());
}
void HinhVuong::Xuat() {
	cout << "\n-----HINH VUONG-----";
	cout << "\nDo dai canh: " << duoi;
	cout << "\nToa do cac diem hinh vuong: ";
	for (int i = 0; i < 4; i++) {
		Diem[i].Xuat();
		cout << "  ";
	}
	cout << "\n";
}
float HinhVuong::getDay() {
	return duoi;
}
void HinhVuong::setDuoiTrai(const Point& a) {
	Diem[0] = a;
	Diem[1] = Point(Diem[0].getX(), Diem[0].getY() + duoi);
	Diem[2] = Point(Diem[0].getX() + duoi, Diem[0].getY() + duoi);
	Diem[3] = Point(Diem[0].getX() + duoi, Diem[0].getY());
}
void HinhVuong::setDay(float n) {
	duoi = n;
	tren = n;
	cao = n;
	Diem[3] = Point(Diem[0].getX() + duoi, Diem[0].getY());
	Diem[2] = Point(Diem[1].getX() + tren, Diem[1].getY());
}