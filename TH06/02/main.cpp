#include "ConNguoi.h"
#include "CongNhan.h"
#include "SinhVien.h"
#include "HocSinh.h"
#include "NgheSi.h"
#include "CaSi.h"
#include <iostream>
using namespace std;

int main() {
    int select;

    cout << "===== CHON LOAI DOI TUONG DE NHAP =====\n";
    cout << "1. Sinh vien\n";
    cout << "2. Hoc sinh\n";
    cout << "3. Cong nhan\n";
    cout << "4. Nghe si\n";
    cout << "5. Ca si\n";
    cout << "Hay lua chon doi tuong (1-5): ";
    cin >> select;
    while (select < 1 || select > 5) {
        cout << "Lua chon khong hop le. Vui long nhap lai (1-5): ";
        cin >> select;
    }
    cin.ignore();

    cout << "\n---- NHAP THONG TIN ----\n";
    cout << "Ban da chon: ";
    switch (select) {
    case 1: {
        cout << "Sinh vien\n";
        SinhVien a;
        a.Nhap();
        a.Xuat();
        break;
    }
    case 2: {
        cout << "Hoc sinh\n";
        HocSinh a;
        a.Nhap();
        a.Xuat();
        break;
    }
    case 3: {
        cout << "Cong nhan\n";
        CongNhan a;
        a.Nhap();
        a.Xuat();
        break;
    }
    case 4: {
        cout << "Nghe si\n";
        NgheSi a;
        a.Nhap();
        a.Xuat();
        break;
    }
    case 5: {
        cout << "Ca si\n";
        CaSi a;
        a.Nhap();
        a.Xuat();
        break;
    }
    default:
        cout << "Invalid option!\n";
        break;
    }

    system("pause");
    return 0;
}