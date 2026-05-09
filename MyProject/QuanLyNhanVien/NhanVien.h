#pragma once
#include <string>
using namespace std;
class NhanVien
{
protected:
	string HoTen;
	int namsinh;
	int luongcoban;
public:
	int loai;
	NhanVien() : HoTen(""), namsinh(2000), luongcoban(0), loai(0) {}
	void Nhap();
	void Xuat();
	string getHoTen();
};

