#include "CVector.h"
#include "CMatrix.h"
#include <iostream>
using namespace std;

int main() {
	CVector a, b, c;
	cout << "Nhap Vector a:";
	cin >> a;
	cout << "\nNhap Vector b:";
	cin >> b;
	cout << "\nDim(a) = " << a.getDim();
	cout << "\na[0] = " << a[0] << "\n";

	cout << "\na = " << a;
	cout << "\nb = " << b;

	c = a + b;
	cout << "\na + b = " << c;
	c = a - b;
	cout << "\na - b = " << c;
	cout << "\na * b = " << a * b;
	c = a * 3;
	cout << "\na * 3 = " << c << "\n";

	if (a == b) {
		cout << "a == b\n";
	}
	if (a != b) {
		cout << "a != b\n";
	}

	CMatrix A, B, C;
	cout << "\nNhap Matrix A:";
	cin >> A;
	cout << "\nNhap Matrix B:";
	cin >> B;
	cout << "\nRow(A) = " << A.getRow();
	cout << "\nCol(A) = " << A.getCol();
	cout << "\nA[0][0] = " << A[0][0] << "\n";

	cout << "\nA = " << A;
	cout << "\nB = " << B;

	C = A + B;
	cout << "\nA + B = " << C;
	C = A - B;
	cout << "\nA - B = " << C;
	cout << "\nA * B = " << A * B;
	C = A * 3;
	cout << "\nA * 3 = " << C << "\n";

	if (A == B) {
		cout << "A == B\n";
	}
	if (A != B) {
		cout << "A != B\n";
	}

	c = A * a;
	cout << "\nTich CMatrix va CVector: A * a = " << c << "\n";

	system("pause");
	return 0;
}