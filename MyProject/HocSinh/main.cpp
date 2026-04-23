#include "MonHoc.h"
#include "HocSinh.h"
#include <iostream>
using namespace std;

int main() {
	HocSinh a;
	a.Nhap();
	a.TinhDiemTrungBinh();
	a.Xuat();

	system("pause");
	return 0;
}
