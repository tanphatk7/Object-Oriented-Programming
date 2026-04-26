#pragma once
#include "ConNguoi.h"
#include <string>
using namespace std;

class SinhVien : public ConNguoi
{
	string mssv;
	string truong_dai_hoc;
	float gpa;
public:
	SinhVien();
	void Nhap();
	void Xuat();
};

