#pragma once
#include "Point.h"
class Ellipse
{
protected:
	Point tam;
	int a, b;
	float DienTich();
public:
	Ellipse();
	void Nhap();
	void Xuat();
	Point getTam();
	int getA();
	int getB();
	void setTam(const Point&);
	void setA(int);
	void setB(int);
};

