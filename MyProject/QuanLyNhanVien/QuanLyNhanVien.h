#pragma once
#include "NhanVien.h"
class QuanLyNhanVien
{
	int n;
	NhanVien** a;
public:
	QuanLyNhanVien();
	~QuanLyNhanVien();
	void Nhap();
	void Xuat();
	int TinhTongLuong(int = 0);
	NhanVien* FindNhanVien(string);
};

