#include "Ellipse.h"
#include <iostream>
using namespace std;


Ellipse::Ellipse() {
	tam = Point(0, 0);
	a = 0;
	b = 0;
}
void Ellipse::Nhap() {
	cout << "Hay nhap toa do tam hinh Ellipse: ";
	tam.Nhap();
	cout << "Hay nhap do dai ban truc lon (a): ";
	cin >> a;
	cout << "Hay nhap do dai ban truc be (b): ";
	cin >> b;
}
void Ellipse::Xuat() {
	cout << "\n--Hinh ellipse--\n";
	cout << "Tam: ";
	tam.Xuat();
	cout << "\nDien tich: " << DienTich() << "\n";
}
Point Ellipse::getTam() {
	return tam;
}
int Ellipse::getA() {
	return a;
}
int Ellipse::getB() {
	return b;
}
void Ellipse::setTam(const Point& a) {
	tam = a;
}
void Ellipse::setA(int n) {
	a = n;
}
void Ellipse::setB(int n) {
	b = n;
}
float Ellipse::DienTich() {
	return (float)3.141592653 * a * b;
}