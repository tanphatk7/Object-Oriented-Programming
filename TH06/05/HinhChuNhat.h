#pragma once
#include "HinhBinhHanh.h"
class HinhChuNhat : public HinhBinhHanh
{
protected:
	float cao;
public:
	HinhChuNhat();
	void Nhap();
	void Xuat();
	float getDay();
	float getCao();
	void setDuoiTrai(const Point&);
	void setDay(float);
	void setCao(float);
};

