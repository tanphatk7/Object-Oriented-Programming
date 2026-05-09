#pragma once
#include "NhanVien.h"
class NhanVienSanXuat : public NhanVien
{
	int sosanpham;
public:
	NhanVienSanXuat() : NhanVien(), sosanpham(0) { loai = 2; }
	void Nhap();
	void Xuat();
	int TinhLuong();
};
