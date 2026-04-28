#pragma once
#include <string>
using namespace std;
class GiaSuc
{
protected:
	int quantity;
	int milk;
	string sound;
public:
	GiaSuc();
	void Nhap() {}
	void Xuat() {}
	int getQuantity();
	int getMilk();
};

