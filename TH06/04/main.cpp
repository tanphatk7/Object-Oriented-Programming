#include <iostream>
#include <GL/glut.h>
#include "ManHinhDoHoa.h"
#include "Circle.h"
using namespace std;

int main(int argc, char** argv) {
	Circle a;
	cout << "---Hay nhap hinh tron---\n";
	a.Nhap();
	a.Xuat();

	cout << "\nVE HINH TRON TRONG MAN HINH DO HOA...\n";
	ManHinhDoHoa mh;
	mh.ThemHinhTron(&a);
	mh.ThemDiem(a.getTam());
	mh.HienThi(argc, argv);

	system("pause");
	return 0;
}