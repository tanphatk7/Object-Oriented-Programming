#pragma once
#include <string>
#include "Candidate.h"
class TestCandidate
{
private:
	int n;
	Candidate* thiSinh;
public:
	void Nhap();
	void Xuat();
	~TestCandidate();
};