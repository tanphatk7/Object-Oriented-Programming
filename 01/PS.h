#pragma once
class PS
{
private:
    int tuso;
    int mauso;
public:
    void Nhap();
    void Xuat();
    PS TinhTong(PS b);
    PS TinhHieu(PS b);
    PS TinhTich(PS b);
    PS TinhThuong(PS b);
    void RutGon();
    void set(int newa, int newb);
};

