#include "SP.h"
#include <iostream>
using namespace std;

int main() {
	SP a, c;
	float n;
	cout << "Nhap so phuc a: "; cin >> a;
	cout << "Nhap so thuc n: "; cin >> n;
	cout << "So phuc a: " << a;
	cout << "\nSo thuc n: " << n;

	SP b(n);
	cout << "\nEp kieu so thuc n thanh so phuc b: " << b << "\n";

	c = a + b;
	cout << "\na + b = " << c;
	c = a - b;
	cout << "\na - b = " << c;
	c = a * b;
	cout << "\na * b = " << c;
	c = a / b;
	cout << "\na / b = " << c << "\n";

	c = a + 3;
	cout << "\nc = a + 3 = " << c << "\n";
	c = 3 + a;
	cout << "\nc = 3 + a = " << c << "\n";

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