#pragma once
class ThoiGian
{
	int gio, phut, giay;
	static bool valid(int h, int m, int s);
public:
	ThoiGian(int = 0, int = 0, int = 0);
	~ThoiGian();
	void Nhap();
	void Xuat();
	int getGio();
	int getPhut();
	int getGiay();
	void setGio(int h);
	void setPhut(int m);
	void setGiay(int s);
	void set(int, int, int);
	void Tang(int s);
	void Giam(int s);
	int TongGiay();
	void ResetTime();
};

