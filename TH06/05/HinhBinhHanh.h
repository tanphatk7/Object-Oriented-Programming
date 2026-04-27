#pragma once
#include "HinhThang.h"
class HinhBinhHanh : public HinhThang
{
public:
	HinhBinhHanh();
	void Nhap();
	void Xuat();
	float getDay();
	float getCao();
	void setDuoiTrai(const Point&);
	void setTrenTrai(const Point&);
	void setDay(float);
};

