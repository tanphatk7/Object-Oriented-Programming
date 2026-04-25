#pragma once
#include <string>
using namespace std;
class NhanVien
{
protected:
	string hoten;
	string ngaysinh;
	int luong = 0;
public:
	void Nhap() {};
	void Xuat() {};
	void TinhLuong() {};
};

