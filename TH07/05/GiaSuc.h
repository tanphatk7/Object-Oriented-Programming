#pragma once
#include <string>
using namespace std;
class GiaSuc
{
public:
	GiaSuc() {}
	virtual ~GiaSuc() {}
	virtual int Breed();
	virtual int GiveMilk() = 0;
	virtual void MakeSound() = 0;
	virtual int getType() = 0;
};

