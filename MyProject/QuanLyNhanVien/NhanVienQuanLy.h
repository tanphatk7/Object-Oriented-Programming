#pragma once
#include "NhanVien.h"
class NhanVienQuanLy : public NhanVien
{
	int thuong;
	float hesochucvu;
public:
	NhanVienQuanLy() : NhanVien(), thuong(0), hesochucvu(0) { loai = 3; }
	void Nhap();
	void Xuat();
	int TinhLuong();
};
