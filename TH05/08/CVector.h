#pragma once
#include <iostream>
using namespace std;
class CVector
{
	int dim;
	float* vec;
public:
	CVector();
	CVector(const CVector& b);
	~CVector();
	void setVector(int);
	int getDim();
	CVector operator+ (const CVector&);
	CVector operator- (const CVector&);
	float operator* (const CVector&);
	CVector operator* (float);
	CVector& operator= (const CVector&);
	float& operator[] (int);
	bool operator== (const CVector&);
	bool operator!= (const CVector&);
	friend istream& operator>> (istream& is, CVector& a) {
		cout << "\nHay nhap so phan tu: ";
		is >> a.dim;

		delete[] a.vec;
		a.vec = nullptr;

		if (a.dim > 0) {
			a.vec = new float[a.dim];
			cout << "Hay nhap " << a.dim << " phan tu: ";
			for (int i = 0; i < a.dim; i++) {
				is >> a.vec[i];
			}
		}
		return is;
	}
	friend ostream& operator<< (ostream& os, CVector a) {
		if (a.dim == 0) {
			os << "Null Vector";
			return os;
		}
		os << "[" << a.vec[0];
		for (int i = 1; i < a.dim; i++) {
			os << ", " << a.vec[i];
		}
		os << "]";
		return os;
	}
};

