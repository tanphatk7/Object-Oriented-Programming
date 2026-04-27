#include "Circle.h"
#include <GL/glut.h>
#include <iostream>
using namespace std;

Circle::Circle() {
	tam = Point(0, 0);
	a = 0;
	b = a;
}
void Circle::Nhap() {
	cout << "Hay nhap toa do tam hinh tron: ";
	tam.Nhap();
	cout << "Hay nhap do dai ban kinh (R): ";
	cin >> a;
	b = a;
}
void Circle::Xuat() {
	cout << "\n--Hinh tron--\n";
	cout << "Tam: ";
	tam.Xuat();
	cout << "\nDien tich: " << DienTich() << "\n";
}
Point* Circle::getTam() {
	return &tam;
}
int Circle::getR() {
	return a;
}
void Circle::setTam(const Point& a) {
	tam = a;
}
void Circle::setR(int n) {
	a = n;
	b = a;
}

void Circle::VeHinhTron() {
    int segments = 100; // Đa giác càng nhiều cạnh thì hình càng gần hình tròn
	float PI = 3.14159265358979323846f;

    glColor3f(0.0f, 1.0f, 0.0f); // Màu xanh cho hình tròn

    // Sử dụng GL_LINE_LOOP để vẽ đường viền rỗng
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < segments; i++) {
        // Tính góc theta cho từng đỉnh (từ 0 đến 2*PI)
        float theta = 2.0f * PI * float(i) / float(segments);

        // Tính tọa độ điểm trên đường tròn dựa vào tâm, a là bán kính hình tròn
        float x = tam.getX() + a * cosf(theta); 
        float y = tam.getY() + a * sinf(theta); 

        glVertex2f(x, y);
    }
    glEnd();
}