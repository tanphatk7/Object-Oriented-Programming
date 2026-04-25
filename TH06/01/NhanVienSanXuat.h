#pragma once
#include "NhanVien.h"

class NhanVienSanXuat : public NhanVien
{
	int luong_co_ban;
	int so_san_pham;
public:
	void Nhap();
	void Xuat();
	void TinhLuong();
};

