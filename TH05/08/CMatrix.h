#pragma once
#include "CVector.h"
#include <iostream>
using namespace std;

class CMatrix
{
	int row, col;
	CVector* arr;
public:
	CMatrix(int = 0, int = 0);
	CMatrix(const CMatrix& b);
	~CMatrix();
	void setMatrix(int, int);
	int getRow();
	int getCol();
	CMatrix operator+ (const CMatrix&);
	CMatrix operator- (const CMatrix&);
	CMatrix operator* (const CMatrix&);
	CMatrix operator* (float);
	CVector operator* (CVector);
	CMatrix& operator= (const CMatrix&);
	CVector& operator[] (int);
	bool operator== (const CMatrix&);
	bool operator!= (const CMatrix&);
	friend istream& operator>> (istream& is, CMatrix& a) {
		int m, n;
		cout << "\nHay nhap so hang va cot cua Matrix (hang, cot > 0): ";
		is >> m >> n;
		
		a.row = m; a.col = n;
		delete[] a.arr;
		a.arr = nullptr;
		
		if (a.row > 0 && a.col > 0) {
			a.setMatrix(a.row, a.col);
			for (int i = 0; i < a.row; i++) {
				cout << "Hay nhap dong thu " << i << ": ";
				for (int j = 0; j < a.col; j++) {
					is >> a.arr[i][j];
				}
			}
		}

		return is;
	}
	friend ostream& operator<< (ostream& os, CMatrix a) {
		if (a.row < 1 || a.col < 1) {
			os << "Null Matrix";
			return os;
		}

		os << "\n[";
		for (int i = 0; i < a.row; i++) {
			if (i != 0) {
				os << "\n ";
			}
			os << a.arr[i][0];
			for (int j = 1; j < a.col; j++) {
				os << ", " << a.arr[i][j];
			}
		}
		os << "]\n";

		return os;
	}
};

