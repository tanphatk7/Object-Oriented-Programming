#pragma once
#include "Point.h"
class DaGiac
{
protected:
	int n;
	Point* a;
public:
	DaGiac();
	DaGiac(const DaGiac&);
	virtual ~DaGiac();
	virtual void Nhap();
	virtual void Xuat();
	virtual void TinhTien(float, float);
};

