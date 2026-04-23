#pragma once
class Point
{
private:
	float hoanh;
	float tung;
public:
	Point();
	Point(float x, float y = 0);
	Point(const Point& a);
	void Nhap();
	void Xuat();
	float getHoanh();
	float getTung();
	void setHoanh(float x);
	void setTung(float y);
	void set(float x, float y);
	void TinhTien(float m, float n);
	void Xoay(Point c, int a);
	void PhongTo(Point c, float a);
	void ThuNho(Point c, float a);
	void VeDiem();
};


