#include "DaThuc.h"
#include <iostream>
using namespace std;

int main() {
	DaThuc a, b, c;
	cout << "Da thuc a:\n";
	cin >> a;
	cout << "Da thuc b:\n";
	cin >> b;

	cout << "\na = " << a;
	cout << "\nb = " << b << "\n";

	c = a + b;
	cout << "\nc = a + b = " << c;
	c = a - b;
	cout << "\nc = a - b = " << c;
	c = a * b;
	cout << "\nc = a * b = " << c;
	c = a / b;
	cout << "\nc = a / b = " << c;
	c = a % b;
	cout << "\nc = a % b = " << c << "\n";

	if (a == b) {
		cout << "\na == b\n";
	}
	if (a != b) {
		cout << "\na != b\n";
	}

	system("pause");
	return 0;
}