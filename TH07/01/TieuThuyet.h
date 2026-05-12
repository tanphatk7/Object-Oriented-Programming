#pragma once
#include "Sach.h"
#include <string>
#include <iostream>
using namespace std;
class TieuThuyet : public Sach
{
	string tacgia;
	string theloai;
public:
	TieuThuyet() : Sach(), tacgia(""), theloai("") {}
	void Nhap();
	void Xuat();
};

