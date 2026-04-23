#include "Candidate.h"
#include <iostream>
#include <string>
using namespace std;

void Candidate::Nhap()
{
    cout<<"Ma HSSV: "; cin >> this->MSSV;
    cin.ignore();
    cout << "Ho ten: "; getline(cin,this->Hoten);
    cout << "Ngay sinh: "; cin >> this->ngaySinh;
    cout << "Thang sinh: "; cin >> this->thangSinh;
    cout << "Nam sinh: "; cin >> this->namSinh;
    cout << "Diem Toan: "; cin >> this->diemToan;
    cout << "Diem Van: "; cin >> this->diemVan;
    cout << "Diem Anh: "; cin >> this->diemAnh;
}
void Candidate::Xuat()
{
    cout << this->MSSV << "\t";
    cout << this->Hoten << "\t";
    cout << this->ngaySinh << "/" << this->thangSinh << "/" << this->namSinh << "\t";
    cout << this->diemToan << "\t";
    cout << this->diemVan << "\t";
    cout << this->diemAnh << "\n";
}
float Candidate::TongDiem()
{
    return this->diemToan + this->diemVan + this->diemAnh;
}