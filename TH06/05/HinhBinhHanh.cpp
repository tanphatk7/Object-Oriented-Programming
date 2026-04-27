#include "HinhBinhHanh.h"
#include <GL/glut.h>
#include <iostream>
using namespace std;

HinhBinhHanh::HinhBinhHanh() {
	Diem = new Point[4];
	duoi = 0;
	tren = duoi;
	for (int i = 0; i < 4; i++) {
		Diem[i] = Point(0, 0);
	}
}
void HinhBinhHanh::Nhap() {
	cout << "Hay nhap toa do diem goc duoi trai cua hinh binh hanh: ";
	Diem[0].Nhap();

	cout << "Hay nhap toa do diem goc tren trai cua hinh binh hanh: ";
	Diem[1].Nhap();
	while (Diem[1].getY() <= Diem[0].getY()) {
		cout << "Diem khong hop le. Vui long nhap lai: ";
		Diem[1].Nhap();
	}
	
	cout << "Hay nhap do dai day: ";
	cin >> duoi;
	tren = duoi;

	Diem[3] = Point(Diem[0].getX() + duoi, Diem[0].getY());
	Diem[2] = Point(Diem[1].getX() + tren, Diem[1].getY());
}
void HinhBinhHanh::Xuat() {
	cout << "\n-----HINH BINH HANH-----";
	cout << "\nDo dai day: " << duoi;
	cout << "\nChieu cao: " << getCao();
	cout << "\nToa do cac diem hinh binh hanh: ";
	for (int i = 0; i < 4; i++) {
		Diem[i].Xuat();
		cout << "  ";
	}
	cout << "\n";
}
float HinhBinhHanh::getDay() {
	return duoi;
}
float HinhBinhHanh::getCao() {
	return Diem[1].getY() - Diem[0].getY();
}
void HinhBinhHanh::setDuoiTrai(const Point& a) {
	Diem[0] = a;
	Diem[3] = Point(Diem[0].getX() + duoi, Diem[0].getY());
}
void HinhBinhHanh::setTrenTrai(const Point& a) {
	Diem[1] = a;
	Diem[2] = Point(Diem[1].getX() + tren, Diem[1].getY());
}
void HinhBinhHanh::setDay(float n) {
	duoi = n;
	tren = n;
	Diem[3] = Point(Diem[0].getX() + duoi, Diem[0].getY());
	Diem[2] = Point(Diem[1].getX() + tren, Diem[1].getY());
}