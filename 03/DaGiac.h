#pragma once
#include "Point.h"
class DaGiac
{
private:
	Point* Diem;
	int num;
public:
	DaGiac();
	DaGiac(const DaGiac& a);
	~DaGiac();
	Point get1Point();
	void set1Point(Point a);
	Point* get(int idx);
	int getNum();
	void set(Point a, int idx);
	void Nhap();
	void Xuat();
	void TinhTien(float m, float n);
	void Xoay(Point c, int a);
	void PhongTo(Point c, float a);
	void ThuNho(Point c, float a);
	void VeDaGiac();
	void SortDaGiac(); // Hàm sắp xếp các đỉnh đa giác để vẽ đồ họa
};

