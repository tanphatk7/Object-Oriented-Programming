#pragma once
#include "HinhChuNhat.h"
class HinhVuong : public HinhChuNhat
{
public:
	HinhVuong() : HinhChuNhat() {}
	HinhVuong(const HinhVuong&);
	virtual void Nhap();
	virtual void Xuat();
};

