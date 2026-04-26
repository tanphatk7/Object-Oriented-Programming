#include "ConNguoi.h"
#include "CongNhan.h"
#include "SinhVien.h"
#include "HocSinh.h"
#include "NgheSi.h"
#include "CaSi.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "=== NHAP DANH SACH CAC DOI TUONG ===\n";
    cout << "Hay nhap so doi tuong: ";
    cin >> n;
    while (n <= 0) {
        cout << "Du lieu khong hop le. Vui long nhap lai: ";
        cin >> n;
    }
    vector<ConNguoi*> danhsach;
    int select;
    
    for (int i = 0; i < n; i++) {
        cout << "\n- HAY CHON LOAI DOI TUONG THU " << i + 1 << " -";
        cout << "\n1. Sinh vien   2. Hoc sinh   3. Cong nhan   4. Nghe si   5. Ca si\n";
        cout << "Hay lua chon doi tuong (1-5): ";
        cin >> select;
        while (select < 1 || select > 5) {
            cout << "Lua chon khong hop le. Vui long nhap lai (1-5): ";
            cin >> select;
        }
        cin.ignore();

        cout << "\nBan da chon: ";
        switch (select) {
        case 1: {
            cout << "Sinh vien\n";
            SinhVien* a = new SinhVien();
            a->Nhap();
            danhsach.push_back(a);
            break;
        }
        case 2: {
            cout << "Hoc sinh\n";
            HocSinh* a = new HocSinh();
            a->Nhap();
            danhsach.push_back(a);
            break;
        }
        case 3: {
            cout << "Cong nhan\n";
            CongNhan* a = new CongNhan();
            a->Nhap();
            danhsach.push_back(a);
            break;
        }
        case 4: {
            cout << "Nghe si\n";
            NgheSi* a = new NgheSi();
            a->Nhap();
            danhsach.push_back(a);
            break;
        }
        case 5: {
            cout << "Ca si\n";
            CaSi* a = new CaSi();
            a->Nhap();
            danhsach.push_back(a);
            break;
        }
        }
    }

    cout << "\n=== DANH SACH CAC DOI TUONG ===\n";
    cout << "So doi tuong: " << n << "\n";
    for (int i = 0; i < n; i++) {
        int type = danhsach[i]->getLoai();
        switch (type) {
        case 1: {
            SinhVien* a = (SinhVien*)danhsach[i];
            a->Xuat();
            break;
        }
        case 2: {
            HocSinh* a = (HocSinh*)danhsach[i];
            a->Xuat();
            break;
        }
        case 3: {
            CongNhan* a = (CongNhan*)danhsach[i];
            a->Xuat();
            break;
        }
        case 4: {
            NgheSi* a = (NgheSi*)danhsach[i];
            a->Xuat();
            break;
        }
        case 5: {
            CaSi* a = (CaSi*)danhsach[i];
            a->Xuat();
            break;
        }
        }
    }

    for (int i = 0; i < n; i++) {
        delete danhsach[i];
    }

    system("pause");
    return 0;
}