#include "CTime.h"
#include "CTimeSpan.h"
#include <iostream>
using namespace std;

int main() {
	CTime a, c;
	int b;
	cout << "Nhap thoi gian a: "; cin >> a;
	cout << "Nhap so giay b: "; cin >> b;
	a.ChuanHoa();
	cout << "Thoi gian a: " << a << "\n";

	c = a + b;
	cout << "\na + b = " << c;
	CTimeSpan d = a - b;
	cout << "\na - b = " << d << "\n";

	c = a;
	cout << "\n++a => cout = " << ++c << "\na = " << c;
	c = a;
	cout << "\na++ => cout = " << c++ << "\na = " << c << "\n";

	c = a;
	cout << "\n--a => cout = " << --c << "\na = " << c;
	c = a;
	cout << "\na-- => cout = " << c-- << "\na = " << c << "\n";

	system("pause");
	return 0;
}