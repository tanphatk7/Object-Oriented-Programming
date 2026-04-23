#include "Point.h"
#include "TamGiac.h"
#include "ManHinhDoHoa.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	TamGiac a;
	a.Nhap();
	a.Xuat();

	TamGiac b(a);
	Point A = b.getA();
	cout << "Diem A duoc truy van la: ";
	A.Xuat();
	cout << "\n";

	Point c(4, 4);
	b.setA(c);
	cout << "Thay doi diem A bang diem (4, 4)\n";
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

	cout << "\nVe tam giac tren man hinh do hoa: ...";
	
	ManHinhDoHoa mh;

	Point drawA(b.getA()), drawB(b.getB()), drawC(b.getC()); // Vẽ các đỉnh của tam giác
	mh.ThemDiem(&drawA);
	mh.ThemDiem(&drawB);
	mh.ThemDiem(&drawC);

	mh.ThemTamGiac(&b);	// Vẽ các cạnh của tam giác
	mh.HienThi(argc, argv);
	return 0;
}