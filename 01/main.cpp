#include "Point.h"
#include "ManHinhDoHoa.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	Point a;
	Point b(1);
	Point c(2, 2);

	cout << "Hay nhap hoanh do va tung do cua a: ";
	a.Nhap();
	Point d(a);
	d.setHoanh(5);
	cout << "Diem d co toa do: ";
	d.Xuat();
	cout << "\n";

	cout << "\nDiem b co toa do: ";
	b.Xuat();
	cout << "\nHoanh do diem b: " << b.getHoanh();
	cout << "\n";

	cout << "\nDoi diem c thanh (3, 6)";
	c.set(3, 6);
	cout << "\nTung do diem c: " << c.getTung();
	cout << "\n";

	c.TinhTien(3, 3);
	cout << "\nTinh tien diem c theo m = 3, n = 3. Toa do c moi la: ";
	c.Xuat();
	cout << "\n";

	Point O(0, 0);
	cout << "\nXoay diem a 90 do quanh diem O(0, 0):\nToa do diem a la: ";
	a.Xoay(O, 90);
	a.Xuat();
	cout << "\n";

	cout << "\nPhong to diem a 2 lan theo diem O(0, 0):\nToa do diem a la: ";
	a.PhongTo(O, 2);
	a.Xuat();
	cout << "\n";

	cout << "\nThu nho diem a 2 lan theo diem O(0, 0):\nToa do diem a la: ";
	a.ThuNho(O, 2);
	a.Xuat();
	
	cout << "\nBat dau ve diem a, b, c va d: ...";
	ManHinhDoHoa mh;
	mh.ThemDiem(&a);
	mh.ThemDiem(&b);
	mh.ThemDiem(&c);
	mh.ThemDiem(&d);

	mh.HienThi(argc, argv);

	return 0;
}