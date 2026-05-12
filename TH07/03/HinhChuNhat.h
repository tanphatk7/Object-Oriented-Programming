#pragma once
#include "HinhBinhHanh.h"
class HinhChuNhat : public HinhBinhHanh
{
public:
	HinhChuNhat() : HinhBinhHanh() {}
	HinhChuNhat(const HinhChuNhat&);
	virtual void Nhap();
	virtual void Xuat();
};

