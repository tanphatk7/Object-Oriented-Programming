#pragma once
#include "Point.h"
class TamGiac
{
private:
	Point* Diem;
	int num = 3;
public:
	TamGiac();
	TamGiac(const TamGiac& a);
	~TamGiac();
	Point getA();
	Point getB();
	Point getC();
	void setA(Point a);
	void setB(Point b);
	void setC(Point c);
	void Nhap();
	void Xuat();
	void TinhTien(float m, float n);
	void Xoay(Point c, int a);
	void PhongTo(Point c, float a);
	void ThuNho(Point c, float a);
	void VeTamGiac();
};

