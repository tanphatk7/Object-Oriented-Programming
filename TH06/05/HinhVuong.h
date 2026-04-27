#pragma once
#include "HinhChuNhat.h"
class HinhVuong : public HinhChuNhat
{
public:
	HinhVuong();
	void Nhap();
	void Xuat();
	float getDay();
	void setDuoiTrai(const Point&);
	void setDay(float);
};

