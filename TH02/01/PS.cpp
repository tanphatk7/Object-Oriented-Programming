#include "PS.h"
#include <iostream>
using namespace std;

void PS::Nhap()
{
    cin >> this->tuso;
    cin >> this->mauso;
}
void PS::Xuat()
{
    if (tuso == 0)
    {
        cout << 0 <<"\n";
    }
    else if (mauso == 1)
    {
        cout << tuso << "\n";
    }
    else
    {
        cout << tuso << "/" << mauso << "\n";
    }
}
int UCLN(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return UCLN(b, a % b);
}
PS PS::TinhTong(PS b)
{
    PS tong;
    tong.mauso = (this->mauso * b.mauso) / UCLN(this->mauso, b.mauso);
    int temp1 = this->tuso * (tong.mauso / this->mauso);
    int temp2 = b.tuso * (tong.mauso / b.mauso);
    tong.tuso = temp1 + temp2;
    return tong;
}
PS PS::TinhHieu(PS b)
{
    PS hieu;
    hieu.mauso = (this->mauso * b.mauso) / UCLN(this->mauso, b.mauso);
    int temp1 = this->tuso * (hieu.mauso / this->mauso);
    int temp2 = b.tuso * (hieu.mauso / b.mauso);
    hieu.tuso = temp1 - temp2;
    return hieu;
}
PS PS::TinhTich(PS b)
{
    PS tich;
    tich.tuso = this->tuso * b.tuso;
    tich.mauso = this->mauso * b.mauso;
    return tich;
}
PS PS::TinhThuong(PS b)
{
    PS thuong;
    thuong.tuso = this->tuso * b.mauso;
    thuong.mauso = this->mauso * b.tuso;
    return thuong;
}
void PS::RutGon()
{
    int ucln = UCLN(tuso, mauso);
    this->tuso /= ucln;
    this->mauso /= ucln;
    if (mauso < 0)
    {
        this->tuso *= -1;
        this->mauso *= -1;
    }
}
void PS::set(int newa, int newb)
{
    this->tuso = newa;
    this->mauso = newb;
}