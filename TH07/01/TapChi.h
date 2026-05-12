#pragma once
#include "Sach.h"
#include <string>
using namespace std;
class TapChi : public Sach
{
	string chude;
	int thangphathanh;
public:
	TapChi() : Sach(), chude(""), thangphathanh(0) {}
	void Nhap();
	void Xuat();
};

