#include "DaGiac.h"
#include "TamGiac.h"
#include "TuGiac.h"
#include <iostream>
using namespace std;

int main() {
	DaGiac *a = nullptr;
	int select;
	cout << "===NHAP HINH DA GIAC===";
	cout << "\n1.Tu giac\n2.Tam giac";
	cout << "\nLua chon loai da giac (1-2): ";
	cin >> select;
	while (select < 1 || select > 2) {
		cout << "Lua chon khong hop le. Vui long nhap lai (1-2): ";
		cin >> select;
	}

	switch (select) {
	case 1:
		a = new TuGiac;
		break;
	case 2:
		a = new TamGiac;
		break;
	}	
	a->Nhap();
	a->Xuat();

	float x, y;
	cout << "Hay nhap toa do tinh tien hinh theo Ox va Oy: ";
	cin >> x >> y;
	cout << "\n--Sau khi tinh tien--";
	a->TinhTien(x, y);
	a->Xuat();
	cout << "\n";

	system("pause");
	return 0;
}