#include "CTimeSpan.h"
#include <iostream>
using namespace std;

int main() {
	CTimeSpan a, b, c;
	cout << "Nhap thoi gian a (Gio, Phut, Giay): "; cin >> a;
	cout << "Nhap thoi gian b (Gio, Phut, Giay): "; cin >> b;
	cout << "Thoi gian a: " << a;
	cout << "\nThoi gian b: " << b << "\n";

	c = a + b;
	cout << "\na + b = " << c;
	c = a - b;
	cout << "\na - b = " << c << "\n";

	c = a + 3600;
	cout << "\na + 3600 = " << c;
	c = 3600 + a;
	cout << "\n3600 + a = " << c << "\n";

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