#pragma once
#include <string>
using namespace std;
class ConNguoi
{
protected:
	int loai; // Phân loại đối tượng
	string hoten;
	string gioitinh;
	int namsinh;
	string quequan;
	int TinhTuoi() { // Tính tuổi hiện tại (2026)
		return 2026 - namsinh;
	}
public:
	ConNguoi() : namsinh(2026), loai(0) {};
	void Nhap();
	void Xuat();
	int getLoai();
	void setLoai(int);
};

