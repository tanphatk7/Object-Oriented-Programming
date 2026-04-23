#include "TestCandidate.h"
#include "Candidate.h"
#include <iostream>
#include <string>
using namespace std;

void TestCandidate::Nhap()
{
    cin >> this->n;
    this->thiSinh = new Candidate[n];
    for (int i = 0; i < this->n; i++)
    {
		cout << "\nThi sinh thu " << i + 1 << ":\n";
        this-> thiSinh[i].Nhap();
    }
}
void TestCandidate::Xuat()
{
	cout << "\nDanh sach thi sinh co tong diem > 15 la:\n";
    for (int i = 0; i < this->n; i++)
    {
        if (this->thiSinh[i].TongDiem() > 15)
        {
            this->thiSinh[i].Xuat();
        }
    }
}

TestCandidate::~TestCandidate()
{
    delete[] this->thiSinh;
	this->thiSinh = nullptr;
}