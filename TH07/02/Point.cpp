#include "Point.h"
#include <iostream>
using namespace std;

Point::Point(float m, float n) {
	x = m;
	y = n;
}
void Point::Nhap() {
	cin >> x >> y;
}
void Point::Xuat() {
	cout << "(" << x << ", " << y << ")";
}
float Point::getX() {
	return x;
}
float Point::getY() {
	return y;
}
void Point::set(float m, float n) {
	x = m;
	y = n;
}
Point& Point::operator= (const Point& a) {
	this->x = a.x;
	this->y = a.y;
	return *this;
}
void Point::TinhTien(float n, float m) {
	x += n;
	y += m;
}