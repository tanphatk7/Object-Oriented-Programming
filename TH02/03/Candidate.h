#pragma once
#include <string>
class Candidate
{
private:
	std::string MSSV;
	std::string Hoten;
	int ngaySinh;
	int thangSinh;
	int namSinh;
	float diemToan;
	float diemVan;
	float diemAnh;
public:
	void Nhap();
	void Xuat();
	float TongDiem();
};