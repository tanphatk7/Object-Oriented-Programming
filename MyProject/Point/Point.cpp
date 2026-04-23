#include "Point.h"
#include <iostream>
using namespace std;

void Point::Nhap() {
	cin >> hoanh >> tung;
}
void Point::Xuat() {
	cout << "(" << hoanh << ", " << tung << ")";
}
Point::Point() {
	hoanh = 0;
	tung = 0;
}
Point::Point(float x, float y) {
	hoanh = x;
	tung = y;
}
Point::Point(const Point& b) {
	this->hoanh = b.hoanh;
	this->tung = b.tung;
}
float Point::getHoanh() {
	return hoanh;
}
float Point::getTung() {
	return tung;
}
void Point::setHoanh(float x) {
	hoanh = x;
}
void Point::setTung(float y) {
	tung = y;
}
void Point::set(float x, float y) {
	hoanh = x;
	tung = y;
}
void Point::TinhTien(float m, float n) {
	hoanh += m;
	tung += n;
}
void Point::Xoay(Point c, int a) {
	float x = hoanh, y = tung;
	hoanh = c.hoanh + (x - c.hoanh) * cos(a) - (y - c.tung) * sin(a);
	tung = c.tung + (x - c.hoanh) * sin(a) + (y - c.tung) * cos(a);
}
void Point::ThuPhong(int n) {
	hoanh *= n;
	tung *= n;
}