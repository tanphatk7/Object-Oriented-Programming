#pragma once
#include "Sach.h"
#include <string>
using namespace std;
class SachGiaoKhoa : public Sach
{
	string monhoc;
	int lop;
public:
	SachGiaoKhoa() : Sach(), monhoc(""), lop(1) {};
	void Nhap();
	void Xuat();
};

