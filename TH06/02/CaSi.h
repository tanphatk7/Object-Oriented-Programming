#pragma once
#include "NgheSi.h"
#include <string>
using namespace std;

class CaSi : public NgheSi
{
	string the_loai_nhac;
public:
	CaSi();
	void Nhap();
	void Xuat();
};

