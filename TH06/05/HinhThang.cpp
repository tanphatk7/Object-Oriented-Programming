#include "HinhThang.h"
#include <GL/glut.h>
#include <iostream>
using namespace std;

HinhThang::HinhThang() {
	Diem = new Point[4];
	duoi = 0;
	tren = 0;
	for (int i = 0; i < 4; i++) {
		Diem[i] = Point(0, 0);
	}
}
void HinhThang::Nhap() {
	cout << "Hay nhap toa do diem goc duoi trai cua hinh thang: ";
	Diem[0].Nhap();
	cout << "Hay nhap do dai day duoi: ";
	cin >> duoi;
	Diem[3] = Point(Diem[0].getX() + duoi, Diem[0].getY());

	cout << "Hay nhap toa do diem goc tren trai cua hinh thang: ";
	Diem[1].Nhap();
	while (Diem[1].getY() <= Diem[0].getY()) {
		cout << "Diem khong hop le. Vui long nhap lai: ";
		Diem[1].Nhap();
	}
	cout << "Hay nhap do dai day tren: ";
	cin >> tren;
	Diem[2] = Point(Diem[1].getX() + tren, Diem[1].getY());
}
void HinhThang::Xuat() {
	cout << "\n-----HINH THANG-----";
	cout << "\nDo dai day duoi: " << duoi;
	cout << "\nDo dai day tren: " << tren;
	cout << "\nChieu cao: " << Diem[1].getY() - Diem[0].getY();
	cout << "\nToa do cac diem hinh thang: ";
	for (int i = 0; i < 4; i++) {
		Diem[i].Xuat();
		cout << "  ";
	}
	cout << "\n";
}
Point* HinhThang::getPoint(int i) {
	return &Diem[i];
}
float HinhThang::getDuoi() {
	return duoi;
}
float HinhThang::getTren() {
	return tren;
}
void HinhThang::setDuoiTrai(const Point& a) {
	Diem[0] = a;
	Diem[3] = Point(Diem[0].getX() + duoi, Diem[0].getY());
}
void HinhThang::setTrenTrai(const Point& a) {
	Diem[1] = a;
	Diem[2] = Point(Diem[1].getX() + tren, Diem[1].getY());
}
void HinhThang::setDuoi(float n) {
	duoi = n;
	Diem[3] = Point(Diem[0].getX() + duoi, Diem[0].getY());
}
void HinhThang::setTren(float n) {
	tren = n;
	Diem[2] = Point(Diem[1].getX() + tren, Diem[1].getY());
}
void HinhThang::VeHinhThang() {
	glColor3f(0.0f, 1.0f, 0.0f); // Màu xanh cạnh hình thang

	glBegin(GL_LINE_LOOP);// Sử dụng GL_LINE_LOOP để vẽ cạnh
	for (int i = 0; i < 4; i++) {
		glVertex2f(Diem[i].getX(), Diem[i].getY());
	}
	glEnd();
}