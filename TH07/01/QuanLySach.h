#pragma once
#include "Sach.h"
class QuanLySach
{
	int n;
	Sach** a;
public:
	QuanLySach();
	~QuanLySach();
	void Nhap();
	void Xuat();
	int TongTien();
};

