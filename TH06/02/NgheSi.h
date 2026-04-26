#pragma once
#include "ConNguoi.h"
#include <string>
using namespace std;

class NgheSi : public ConNguoi
{
	string linh_vuc; // Lĩnh vực nghệ thuật
protected:
	int so_tac_pham;
public:
	NgheSi();
	void Nhap();
	void Xuat();
};

