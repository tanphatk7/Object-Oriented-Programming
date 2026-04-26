#pragma once
#include "ConNguoi.h"
#include <string>
using namespace std;

class CongNhan : public ConNguoi
{
	int luong;
	string noi_lam_viec;
public:
	CongNhan();
	void Nhap();
	void Xuat();
};

