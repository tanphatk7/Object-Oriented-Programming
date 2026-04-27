#include "Point.h"
#include <GL/glut.h>
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

void Point::VeDiem() {
	glPointSize(10.0f);             // Độ to của điểm
	glEnable(GL_POINT_SMOOTH);      // Bo góc để điểm có dạng hình tròn

	// Bật chế độ trộn màu (Blend) để làm mờ các góc nhọn của hình vuông
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glColor3f(0.0f, 1.0f, 0.0f);    // Đặt màu xanh cho điểm

	glBegin(GL_POINTS); // Sử dụng GL_POINTS để vẽ điểm
	glVertex2f(x, y);  // Vẽ 1 điểm
	glEnd();

	// Tắt chế độ trộn màu (Blend)
	glDisable(GL_POINT_SMOOTH);
	glDisable(GL_BLEND);
}