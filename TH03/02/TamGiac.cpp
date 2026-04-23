#include "TamGiac.h"
#include <iostream>
#include <GL/glut.h>
using namespace std;

TamGiac::TamGiac() {
	Diem = new Point[num];
}
TamGiac::TamGiac(const TamGiac& a) {
	Diem = new Point[num];
	this->Diem[0] = a.Diem[0];
	this->Diem[1] = a.Diem[1];
	this->Diem[2] = a.Diem[2];
}
TamGiac::~TamGiac() {
	delete[] Diem;
	Diem = nullptr;
}
Point TamGiac::getA() {
	return Diem[0];
}
Point TamGiac::getB() {
	return Diem[1];
}
Point TamGiac::getC() {
	return Diem[2];
}
void TamGiac::setA(Point a) {
	this->Diem[0] = a;
}
void TamGiac::setB(Point b) {
	this->Diem[1] = b;
}
void TamGiac::setC(Point c) {
	this->Diem[2] = c;
}
void TamGiac::Nhap() {
	cout << "Hay nhap tam giac sau:\n";
	for (int i = 0; i < num; i++) {
		cout << "Nhap diem thu " << i + 1 << " : ";
		Diem[i].Nhap();
	}
}
void TamGiac::Xuat() {
	cout << "\nToa do cua "<<num<<" dinh lan luot la:";
	for (int i = 0; i < num; i++) {
		cout << "\nDiem thu " << i + 1 << " : ";
		Diem[i].Xuat();
	}
	cout << "\n\n";
}
void TamGiac::TinhTien(float m, float n) {
	for (int i = 0; i < num; i++) {
		Diem[i].TinhTien(m, n);
	}
}
void TamGiac::Xoay(Point c, int a) {
	for (int i = 0; i < num; i++) {
		Diem[i].Xoay(c, a);
	}
}
void TamGiac::PhongTo(Point c, float a) {
	for (int i = 0; i < num; i++) {
		Diem[i].PhongTo(c, a);
	}
}
void TamGiac::ThuNho(Point c, float a) {
	for (int i = 0; i < num; i++) {
		Diem[i].ThuNho(c, a);
	}
}

void TamGiac::VeTamGiac() {
	glColor3f(0.0f, 1.0f, 0.0f); // Màu của cạnh tam giác

	glBegin(GL_LINE_LOOP); // Sử dụng GL_LINE_LOOP để vẽ đường khép kín

	for (int i = 0; i < 3; i++) {
		glVertex2f(Diem[i].getHoanh(), Diem[i].getTung()); // Nối từng cạnh của tam giác
	}

	glEnd();
}