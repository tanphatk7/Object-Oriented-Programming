#pragma once
#include "Point.h"
class HinhThang
{
protected:
	Point* Diem; // Tọa độ 4 điểm (thứ tự đi từ góc dưới trái theo chiều kim đồng hồ)
	float duoi, tren; // Độ dài cạnh dưới và cạnh trên
public:
	HinhThang();
	void Nhap();
	void Xuat();
	Point* getPoint(int);
	float getDuoi();
	float getTren();
	void setDuoiTrai(const Point&);
	void setTrenTrai(const Point&);
	void setDuoi(float);
	void setTren(float);
	void VeHinhThang();
};

