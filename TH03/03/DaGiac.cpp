#include "DaGiac.h"
#include "ManHinhDoHoa.h"
#include <iostream>
#include <GL/glut.h>
#include <algorithm>
using namespace std;

DaGiac::DaGiac() {
	num = 0;
	Diem = nullptr;
}
DaGiac::DaGiac(const DaGiac& a) {
	num = a.num;
	Diem = new Point[num];
	for (int i = 0; i < num; i++) {
		this->Diem[i] = a.Diem[i];
	}
}
DaGiac::~DaGiac() {
	delete[] Diem;
	Diem = nullptr;
}
Point DaGiac::get1Point() {
	int idx;
	do {
		cout << "Hay nhap thu tu cua diem ban muon tra cuu (1-" << num << "): ";
		cin >> idx;
	} while (idx < 1 || idx > num);
	return Diem[idx-1];
}
void DaGiac::set1Point(Point a) {
	int idx;
	do {
		cout << "Hay nhap thu tu cua diem ban muon thay doi (1-" << num << "): ";
		cin >> idx;
	} while (idx < 1 || idx > num);
	Diem[idx - 1] = a;
	cout << "Da thay diem thu " << idx << " bang diem ";
	a.Xuat();
	cout << "\n";
}

Point* DaGiac::get(int idx) {
	return &Diem[idx];
}
void DaGiac::set(Point a, int idx) {
	Diem[idx] = a;
}
int DaGiac::getNum() {
	return num;
}

void DaGiac::Nhap() {
	do {
		cout << "Hay nhap so diem cua da giac (>= 3): ";
		cin >> num;
	} while (num < 3);
	
	if (Diem != nullptr) {
		delete[] Diem;
	}
	Diem = new Point[num];

	for (int i = 0; i < num; i++) {
		cout << "Nhap diem thu " << i + 1 << " : ";
		Diem[i].Nhap();
	}
}
void DaGiac::Xuat() {
	cout << "\nToa do cua " << num << " dinh lan luot la:\n";
	for (int i = 0; i < num; i++) {
		cout << "Diem thu " << i + 1 << " : ";
		Diem[i].Xuat();
		cout << "\n";
	}
	cout << "\n";
}
void DaGiac::TinhTien(float m, float n) {
	for (int i = 0; i < num; i++) {
		Diem[i].TinhTien(m, n);
	}
}
void DaGiac::Xoay(Point c, int a) {
	for (int i = 0; i < num; i++) {
		Diem[i].Xoay(c, a);
	}
}
void DaGiac::PhongTo(Point c, float a) {
	for (int i = 0; i < num; i++) {
		Diem[i].PhongTo(c, a);
	}
}
void DaGiac::ThuNho(Point c, float a) {
	for (int i = 0; i < num; i++) {
		Diem[i].ThuNho(c, a);
	}
}

void DaGiac::VeDaGiac() {
	SortDaGiac(); // Sắp xếp các đỉnh đúng thứ tự để vẽ đồ họa
	glColor3f(0.0f, 1.0f, 0.0f);  // Màu của cạnh đa giác

	glBegin(GL_LINE_LOOP); // Sử dụng GL_LINE_LOOP để vẽ đường khép kín

	for (int i = 0; i < num	; i++) {
		glVertex2f(Diem[i].getHoanh(), Diem[i].getTung()); // Nối từng cạnh của đa giác
	}

	glEnd();
}

void DaGiac::SortDaGiac() {
    // Tìm trọng tâm G(gx, gy) của đa giác
	float gx = 0, gy = 0;
    for (int i = 0; i < num; i++) {
        gx += Diem[i].getHoanh();
        gy += Diem[i].getTung();
    }
    gx /= num;	gy /= num;

    // Sắp xếp danh sách điểm theo góc cực bằng biểu thức Lambda
    sort(Diem, Diem + num, [gx, gy](Point& a, Point& b) { // Comparator của hàm Sort

        // Hàm atan2(y, x) trả về góc (radian) giữa điểm đó và trục X nằm ngang
        float gocA = atan2(a.getTung() - gy, a.getHoanh() - gx); 
        float gocB = atan2(b.getTung() - gy, b.getHoanh() - gx);
        
        return gocA < gocB; // Sắp xếp theo thứ tự tăng dần của góc
    });
}