#include "DaGiac.h"
#include "Point.h"
#include "ManHinhDoHoa.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	DaGiac a;
	a.Nhap();
	a.Xuat();

	DaGiac b(a);
	Point e = b.get1Point();
	cout << "Diem vua duoc truy van la: ";
	e.Xuat();
	cout << "\n";

	Point c(4, 4);
	b.set1Point(c);
	b.Xuat();

	cout << "Tinh tien m = 2, n = 3: ";
	b.TinhTien(2, 3);
	b.Xuat();

	Point O(0, 0);
	cout << "Xoay 90 do quanh diem O(0, 0): ";
	b.Xoay(O, 90);
	b.Xuat();

	cout << "Phong to 2 lan theo diem O(0, 0): ";
	b.PhongTo(O, 2);
	b.Xuat();

	cout << "Thu nho 2 lan theo diem O(0, 0): ";
	b.ThuNho(O, 2);
	b.Xuat();

	cout << "Ve da giac tren man hinh do hoa: ...";
	ManHinhDoHoa mh;
	for (int i = 0; i < b.getNum(); i++) {
		mh.ThemDiem(b.get(i)); // Vẽ các đỉnh của đa giác
	}

	mh.ThemDaGiac(&b); // Vẽ đa giác
	mh.HienThi(argc, argv);
	return 0;
}