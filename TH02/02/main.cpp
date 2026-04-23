#include "SP.h"
#include <iostream>
using namespace std;

int main()
{
	SP a, b;
	cout << "Nhap so phuc a";
	a.Nhap();
	cout << "\nNhap so phuc b";
	b.Nhap();

	SP c;
	c = a.TongSP(b);
	cout << "\na + b = ";
	c.Xuat();

	c = a.HieuSP(b);
	cout << "\na - b = ";
	c.Xuat();

	c = a.TichSP(b);
	cout << "\na * b = ";
	c.Xuat();

	c = a.ThuongSP(b);
	cout << "\na / b = ";
	c.Xuat();
	cout << "\n";
	
	system("pause");
	return 0;
}