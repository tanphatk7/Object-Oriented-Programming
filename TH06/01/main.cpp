#include "NhanVienSanXuat.h"
#include "NhanVienVanPhong.h"
#include <iostream>
using namespace std;

int main() {
	NhanVienSanXuat a;
	a.Nhap();
	NhanVienVanPhong b;
	b.Nhap();
	a.TinhLuong();
	b.TinhLuong();
	a.Xuat();
	b.Xuat();

	system("pause");
	return 0;
}