#include "ManHinhDoHoa.h"
#include "HinhThang.h"
#include "HinhBinhHanh.h"
#include "HinhChuNhat.h"
#include "HinhVuong.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int select;
	HinhThang* a = nullptr;
	cout << "===== HAY NHAP LOAI HINH TU GIAC =====";
	cout << "\n1. Hinh thang";
	cout << "\n2. Hinh binh hanh";
	cout << "\n3. Hinh chu nhat";
	cout << "\n4. Hinh vuong";
	cout << "\nHay chon doi tuong (1-4): ";

	cin >> select;
	while (select < 1 || select > 4) {
		cout << "Lua chon khong hop le. Vui long nhap lai: ";
		cin >> select;
	}

	cout << "\n--- NHAP THONG TIN ---\n";
	cout << "Ban da chon: ";
	switch (select) {
	case 1: {
		cout << "Hinh thang\n";
		HinhThang* ht = new HinhThang();
		ht->Nhap();
		ht->Xuat();
		a = ht;
		break;
	}
	case 2: {
		cout << "Hinh binh hanh\n";
		HinhBinhHanh* hbh = new HinhBinhHanh();
		hbh->Nhap();
		hbh->Xuat();
		a = hbh;
		break;
	}
	case 3: {
		cout << "Hinh chu nhat\n";
		HinhChuNhat* hcn = new HinhChuNhat();
		hcn->Nhap();
		hcn->Xuat();
		a = hcn;
		break;
	}
	case 4: {
		cout << "Hinh vuong\n";
		HinhVuong* hv = new HinhVuong();
		hv->Nhap();
		hv->Xuat();
		a = hv;
		break;
	}
	}

	cout << "\nVE HINH TRONG TRUC TOA DO OXY...";
	ManHinhDoHoa mh;
	for (int i = 0; i < 4; i++) {
		mh.ThemDiem(a->getPoint(i));
	}
	mh.ThemHinhThang(a);
	mh.HienThi(argc, argv);

	delete a;
	system("pause");
	return 0;
}