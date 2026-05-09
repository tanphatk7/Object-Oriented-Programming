#pragma once
#include "NhanVien.h"
class NhanVienVanPhong : public NhanVien
{
	int trocap, songaylamviec;
public:
	NhanVienVanPhong() : NhanVien(), trocap(0), songaylamviec(0) { loai = 1; }
	void Nhap();
	void Xuat();
	int TinhLuong();
};

