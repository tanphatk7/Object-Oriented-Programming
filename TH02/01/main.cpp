#include "PS.h"
#include <iostream>
using namespace std;

int main()
{
    PS a, b;
    cout << "Nhap tu so va mau so cua a: ";
    a.Nhap(); a.RutGon();
    cout << "a = ";
    a.Xuat();
    cout << "\nNhap tu so va mau so cua b: ";
    b.Nhap(); b.RutGon();
    cout << "b = ";
    b.Xuat();
    
    PS c;
    c = a.TinhTong(b);
    c.RutGon();
    cout << "\na + b = ";
    c.Xuat();

    c = a.TinhHieu(b);
    c.RutGon();
    cout << "a - b = ";
    c.Xuat();

    c = a.TinhTich(b);
    c.RutGon();
    cout << "a * b = ";
    c.Xuat();

    c = a.TinhThuong(b);
    c.RutGon();
    cout << "a / b = ";
    c.Xuat();

    system("pause");
    return 0;
}