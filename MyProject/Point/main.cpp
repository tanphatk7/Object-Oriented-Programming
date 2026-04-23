#include "Point.h"
#include <iostream>
using namespace std;

int main() {
	Point a;
	Point b(1);
	Point c(2, 2);

	cout << "Hay nhap hoanh do va tung do cua a: ";
	a.Nhap();
	Point d(a);
	d.setHoanh(10);
	cout << "Diem d co toa do: ";
	d.Xuat();

	cout << "\nHoanh do diem b: " << b.getHoanh();
	c.set(3, 6);
	cout << "\nTung do diem c: " << c.getTung();

	c.TinhTien(3, 3);
	cout << "\nTinh tien diem c (3, 3). Toa do c moi la: ";
	c.Xuat();

	a.set(0, 0);
	b.Xoay(a, 90);
	cout << "\nTa xoay diem b 90 do theo tam (0, 0). Toa do b moi la: ";
	b.Xuat();

	d.ThuPhong(2);
	cout << "\nThu phong diem d 2 lan ta duoc: ";
	d.Xuat();
	cout << "\n";

	system("pause");
	return 0;
}