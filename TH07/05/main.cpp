#include "GiaSuc.h"
#include "Bo.h"
#include "De.h"
#include "Cuu.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
	srand((unsigned int)time(nullptr));
	cout << "=====QUAN LY TRANG TRAI=====\n";
	int bo, cuu, de;
	cout << "Hay nhap so luong bo ban dau: ";
	cin >> bo;
	cout << "Hay nhap so luong cuu ban dau: ";
	cin >> cuu;
	cout << "Hay nhap so luong de ban dau: ";
	cin >> de;

	vector<GiaSuc*> nongtrai;
	for (int i = 0; i < bo; i++) {
		Bo* b = new Bo;
		nongtrai.push_back(b);
	}
	for (int i = 0; i < cuu; i++) {
		Cuu* c = new Cuu;
		nongtrai.push_back(c);
	}
	for (int i = 0; i < de; i++) {
		De* d = new De;
		nongtrai.push_back(d);
	}

	cout << "\n[a] Nguoi chu di vang, nhung tieng keu nghe duoc trong nong trai:\n";
	for (GiaSuc *gs : nongtrai) {
		gs->MakeSound(); // Chỉ cần gọi hàm gia súc kêu tiếng mà không cần phải switch case phân loại gia súc
	}

	cout << "\n\n[b] Thong ke nong trai sau 1 lua sinh va mot lua cho sua:";
	cout << "\nSo luong bo ban dau: " << bo;
	cout << "\nSo luong cuu ban dau: " << cuu;
	cout << "\nSo luong de ban dau: " << de;

	int tongSuaBo = 0, tongSuaCuu = 0, tongSuaDe = 0, b = 0, c = 0, d = 0;
	for (GiaSuc* gs : nongtrai) {
		int milk = gs->GiveMilk(); // Gọi hàm cho sữa tương ứng với từng loại gia súc
		int breed = gs->Breed();
		int gstype = gs->getType();
		switch (gstype) {
		case 1:
			b += breed;
			tongSuaBo += milk;
			break;
		case 2:
			c += breed;
			tongSuaCuu += milk;
			break;
		case 3:
			d += breed;
			tongSuaDe += milk;
			break;
		}
	}

	cout << "\n\n---Thong ke so luong gia suc sau mot lua sinh---";
	cout << "\nSo luong bo sinh ra: " << b;
	cout << "\nSo luong cuu sinh ra: " << c;
	cout << "\nSo luong de sinh ra: " << d;

	cout << "\n\n---Tong so lit sua thu duoc---";
	cout << "\nSua bo: " << tongSuaBo;
	cout << "\nSua cuu: " << tongSuaCuu;
	cout << "\nSua de: " << tongSuaDe;
	int tong = tongSuaBo + tongSuaCuu + tongSuaDe;
	cout << "\nTong cong: " << tong << "\n";

	system("pause");
	return 0;
}