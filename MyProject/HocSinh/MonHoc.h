#pragma once
#include <string>
using namespace std;
class MonHoc
{
	string ten;
	float GPA;
	int tinChi;
	bool isDone;
public:
	MonHoc(string = "", float = 0, int = 0, bool = false);
	void Nhap();
	void Xuat();
	float getGPA();
};
