#pragma once
#include "ConNguoi.h"
#include <string>
using namespace std;

class HocSinh : public ConNguoi
{
	string mshs;
	string truong;
	int lop; // Lớp học
	float dtb;
public:
	HocSinh();
	void Nhap();
	void Xuat();
};

