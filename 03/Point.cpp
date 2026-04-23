#include "Point.h"
#include <GL/glut.h>
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
	float x = this->hoanh, y = this->tung;
	float pi = 3.1415926535f;
	float rad = a * (pi / 180);
	this->hoanh = c.hoanh + (x - c.hoanh) * cos(rad) - (y - c.tung) * sin(rad);
	this->tung = c.tung + (x - c.hoanh) * sin(rad) + (y - c.tung) * cos(rad);
}
void Point::PhongTo(Point c, float a) {
	hoanh = c.hoanh + a * (hoanh - c.hoanh);
	tung = c.tung + a * (tung - c.tung);
}
void Point::ThuNho(Point c, float a) {
	hoanh = c.hoanh + (1.0f/a) * (hoanh - c.hoanh);
	tung = c.tung + (1.0f/a) * (tung - c.tung);
}

void Point::VeDiem() {
	glPointSize(10.0f);             // Độ to của điểm
	glEnable(GL_POINT_SMOOTH);      // Bo góc để điểm có dạng hình tròn
 	
	// Bật chế độ trộn màu (Blend) để làm mờ các góc nhọn của hình vuông
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glColor3f(0.0f, 1.0f, 0.0f);    // Đặt màu xanh cho điểm

	glBegin(GL_POINTS); // Sử dụng GL_POINTS để vẽ điểm
	glVertex2f(hoanh, tung);  // Vẽ 1 điểm
	glEnd();

	// Tắt chế độ trộn màu (Blend)
	glDisable(GL_POINT_SMOOTH);
	glDisable(GL_BLEND);
}
