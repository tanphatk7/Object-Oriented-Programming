#pragma once
class SP
{
private:
	float thuc;
	float ao;
public:
	void Nhap();
	void Xuat();
	SP TongSP(SP b);
	SP HieuSP(SP b);
	SP TichSP(SP b);
	SP ThuongSP(SP b);
	void set(float newthuc, float newao);
};

