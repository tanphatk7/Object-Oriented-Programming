#pragma once
#include "TuGiac.h"
class HinhBinhHanh : public TuGiac
{
public:
	HinhBinhHanh() : TuGiac() {}
	HinhBinhHanh(const HinhBinhHanh&);
	virtual void Nhap();
	virtual void Xuat();
};

