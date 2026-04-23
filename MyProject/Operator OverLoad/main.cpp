#include "PS.h"
#include <iostream>
using namespace std;

int main() {
	PS a, b;
	a.Nhap();
	b.Nhap();
	PS c = a + b;
	c.Xuat();

	system("pause");
	return 0;
}