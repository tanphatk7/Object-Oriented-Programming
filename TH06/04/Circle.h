#pragma once
#include "Ellipse.h"
class Circle : public Ellipse
{
public:
	Circle();
	void Nhap();
	void Xuat();
	Point* getTam();
	int getR();
	void setTam(const Point&);
	void setR(int);
	void VeHinhTron();
};

