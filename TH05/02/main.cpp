#include "PS.h"
#include <iostream>
using namespace std;

int main() {
	PS a, c;
	int n;
	cout << "Nhap phan so a: "; cin >> a;
	cout << "Nhap so nguyen n: "; cin >> n;
	cout << "Phan so a: " << a;
	cout << "\nSo nguyen n: " << n;

	PS b(n);
	cout << "\nEp kieu so nguyen n thanh phan so b: " << b << "\n";

	c = a + b;
	cout << "\na + b = " << c;
	c = a - b;
	cout << "\na - b = " << c;
	c = a * b;
	cout << "\na * b = " << c;
	c = a / b;
	cout << "\na / b = " << c << "\n";

	c = a + 3;
	cout << "\na + 3 = " << c;
	c = 3 + a;
	cout << "\n3 + a = " << c << "\n";

	cout << "\na == b? ";
	if (a == b) cout << "Dung";
	else cout << "Sai";

	cout << "\na != b? ";
	if (a != b) cout << "Dung";
	else cout << "Sai";

	cout << "\na > b? ";
	if (a > b) cout << "Dung";
	else cout << "Sai";

	cout << "\na >= b? ";
	if (a >= b) cout << "Dung";
	else cout << "Sai";

	cout << "\na < b? ";
	if (a < b) cout << "Dung";
	else cout << "Sai";

	cout << "\na <= b? ";
	if (a <= b) cout << "Dung";
	else cout << "Sai";
	cout << "\n";

	system("pause");
	return 0;
}