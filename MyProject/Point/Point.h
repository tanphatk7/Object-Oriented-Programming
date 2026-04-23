#pragma once
class Point
{
private:
	float hoanh, tung;
public:
	void Nhap();
	void Xuat();
	Point();
	Point(float x, float y = 0);
	Point(const Point& b);
	float getHoanh();
	float getTung();
	void setHoanh(float x);
	void setTung(float y);
	void set(float x, float y);
	void TinhTien(float m, float n);
	void Xoay(Point c, int a);
	void ThuPhong(int n);
};

