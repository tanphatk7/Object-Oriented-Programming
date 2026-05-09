#include "QuanLyNhanVien.h"
#include "NhanVien.h"
#include "NhanVienVanPhong.h"
#include "NhanVienSanXuat.h"
#include "NhanVienQuanLy.h"
#include <string>
#include <iostream>
using namespace std;

QuanLyNhanVien::QuanLyNhanVien() {
	n = 0;
	a = nullptr;
}
QuanLyNhanVien::~QuanLyNhanVien() {
	delete[] a;
}
void QuanLyNhanVien::Nhap() {
	cout << "Hay nhap so nhan vien: ";
	cin >> n;
	a = new NhanVien * [n];
	int select;
	for (int i = 0; i < n; i++) {
        cout << "\n- HAY CHON LOAI NHAN VIEN -";
        cout << "\n1. Nhan vien van phong   2. Nhan vien san xuat   3. Nhan vien quan ly\n";
        cout << "Hay lua chon doi tuong (1-3): ";
        cin >> select;
        while (select < 1 || select > 3) {
            cout << "Lua chon khong hop le. Vui long nhap lai (1-3): ";
            cin >> select;
        }
        cin.ignore();
        switch (select) {
        case 1:
            a[i] = new NhanVienVanPhong;
            ((NhanVienVanPhong*)a[i])->Nhap();
            break;
        case 2:
            a[i] = new NhanVienSanXuat;
            ((NhanVienSanXuat*)a[i])->Nhap();
            break;
        case 3:
            a[i] = new NhanVienQuanLy;
            ((NhanVienQuanLy*)a[i])->Nhap();
            break;
        }
    }
}
void QuanLyNhanVien::Xuat() {
    cout << "\n===DANH SACH NHAN VIEN===\n";
    for (int i = 0; i < n; i++) {
        switch (a[i]->loai) {
        case 1:
            ((NhanVienVanPhong*)a[i])->Xuat();
            break;
        case 2:
            ((NhanVienSanXuat*)a[i])->Xuat();
            break;
        case 3:
            ((NhanVienQuanLy*)a[i])->Xuat();
            break;
        default:
            a[i]->Xuat();
            break;
        }
        cout << "\n";
    }
}
int QuanLyNhanVien::TinhTongLuong(int type) {
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (type == 0 || a[i]->loai == type) {
            switch (a[i]->loai) {
            case 1:
                res += ((NhanVienVanPhong*)a[i])->TinhLuong();
                break;
            case 2:
                res += ((NhanVienSanXuat*)a[i])->TinhLuong();
                break;
            case 3:
                res += ((NhanVienQuanLy*)a[i])->TinhLuong();
                break;
            }
        }
    }
    return res;
}
NhanVien* QuanLyNhanVien::FindNhanVien(string s) {
    for (int i = 0; i < n; i++) {
        if (a[i]->getHoTen() == s) {
            return a[i];
        }
    }
    return nullptr;
}