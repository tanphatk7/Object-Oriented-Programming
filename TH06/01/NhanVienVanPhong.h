#pragma once
#include "NhanVien.h"
class NhanVienVanPhong : public NhanVien
{
	int so_ngay_lam_viec;
public:
	void Nhap();
	void Xuat();
	void TinhLuong();
};

