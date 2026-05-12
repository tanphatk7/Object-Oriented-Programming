#pragma once
class Point
{
	float x, y;
public:
	Point(float = 0, float = 0);
	void Nhap();
	void Xuat();
	float getX();
	float getY();
	void set(float, float);
	void TinhTien(float, float);
	Point& operator= (const Point&);
};

