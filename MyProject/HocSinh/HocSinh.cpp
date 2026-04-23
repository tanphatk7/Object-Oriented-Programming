#include <iostream>
#include <string>
#include "HocSinh.h"
using namespace std;

HocSinh::HocSinh(string MaHS, string HoTen, int a) {
	maHS = MaHS;
	hoTen = HoTen;
    num = a;
    mon = NULL;
    DTB = 0;
}

void HocSinh::Nhap() {
    cout << "Nhap ma hoc sinh (toi da 8 ky tu): ";
    getline(cin, maHS);

    cout << "Nhap ho ten (toi da 30 ky tu): ";
    getline(cin, hoTen);

    while (num <= 0) {
        cout << "Hay nhap so mon hoc cua hoc sinh: ";
        cin >> num;
    }
    
    mon = new MonHoc[num];

    for (int i = 0; i < num; i++) {
        cout << "\nHay nhap mon hoc thu " << i + 1 << ":\n";
        mon[i].Nhap();
    }
}

void HocSinh::Xuat() {
    cout << "\n*** Thong tin hoc sinh ***\n";
    cout << "Ho va ten: " << hoTen;
    cout << "\nMa hoc sinh: " << maHS;
    cout << "\nCac mon hoc cua hoc sinh:\n";
    for (int i = 0; i < num; i++) {
        mon[i].Xuat();
    }
    cout << "\nDiem trung binh: " << DTB << "\n";

}
void HocSinh::TinhDiemTrungBinh() {
    int tong = 0;
    for (int i = 0; i < num; i++) {
        tong += mon[i].getGPA();
    }
    DTB = tong / float(num);
}
void HocSinh::XepLoai() const {
    if (DTB >= 9) {
        cout << "Xuat sac";
    }
    else if (DTB >= 8) {
        cout << "Gioi";
    }
    else if (DTB >= 6.5) {
        cout << "Kha";
    }
    else if (DTB >= 5) {
        cout << "Trung binh";
    }
    else {
        cout << "Yeu";
    }
}
