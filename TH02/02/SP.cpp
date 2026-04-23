#include "SP.h"
#include <iostream>
using namespace std;

void SP::Nhap()
{
	cout << "\nPhan thuc: ";
	cin >> this->thuc;
	cout << "Phan ao: ";
	cin >> this->ao;
}
void SP::Xuat()
{
	cout << thuc;
	if (ao > 0)
	{
		cout << " + " << ao << "i";
	}
	else if (ao < 0)
	{
		cout << " - " << abs(ao) << "i";
	}
}

void SP::set(float newthuc, float newao)
{
	this->thuc = newthuc;
	this->ao = newao;
}
SP SP::TongSP(SP b)
{
	SP c;
	c.thuc = this->thuc + b.thuc;
	c.ao = this->ao + b.ao;
	return c;
}
SP SP::HieuSP(SP b)
{
	SP c;
	c.thuc = this->thuc - b.thuc;
	c.ao = this->ao - b.ao;
	return c;
}
SP SP::TichSP(SP b)
{
	SP c;
	c.thuc = this->thuc * b.thuc - this->ao * b.ao;
	c.ao = this->thuc * b.ao + this->ao * b.thuc;
	return c;
}
SP SP::ThuongSP(SP b)
{
	SP c;
	float mauso = b.thuc * b.thuc + b.ao * b.ao;
	c.thuc = (this->thuc * b.thuc + this->ao * b.ao) / mauso;
	c.ao = (this->ao * b.thuc - this->thuc * b.ao) / mauso;
	return c;
}