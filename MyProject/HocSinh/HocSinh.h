#pragma once
#include <string>
#include "MonHoc.h"

class HocSinh {
private:
    string maHS, hoTen;
    float DTB;
    int num;
    MonHoc* mon;
public:
    HocSinh(string = "", string = "", int = 0);
    void Nhap();
    void Xuat();
    void TinhDiemTrungBinh();
    void XepLoai() const;
};