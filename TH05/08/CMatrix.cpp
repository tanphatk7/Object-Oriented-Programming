#include "CVector.h"
#include "CMatrix.h"
#include <iostream>
using namespace std;

CMatrix::CMatrix(int m, int n) {
	row = m;
	col = n;
	if (row == 0 || col == 0) {
		arr = nullptr;
	}
	arr = new CVector[row];
	for (int i = 0; i < row; i++) {
		arr[i].setVector(col);
	}
}
CMatrix::CMatrix(const CMatrix& b) {
	this->row = b.row;
	this->col = b.col;
	if (b.arr != nullptr) {
		this->arr = new CVector[this->row];
		for (int i = 0; i < this->row; i++) {
			this->arr[i] = b.arr[i];
		}
	}
	else {
		this->arr = nullptr;
	}
}
CMatrix::~CMatrix() {
	delete[] arr;
}
void CMatrix::setMatrix(int m, int n) {
	delete[] arr;
	row = m;
	col = n;
	arr = new CVector[row];
	for (int i = 0; i < row; i++) {
		arr[i].setVector(col);
	}
}
int CMatrix::getRow() {
	return row;
}
int CMatrix::getCol() {
	return col;
}
CMatrix CMatrix::operator+ (const CMatrix& b) {
	CMatrix res;
	if (this->row == b.row && this->col == b.col) {
		res.row = this->row;
		res.col = this->col;
		res.setMatrix(res.row, res.col);
		for (int i = 0; i < res.row; i++) {
			for (int j = 0; j < res.col; j++) {
				res.arr[i][j] = this->arr[i][j] + b.arr[i][j];
			}
		}
	}
	return res;
}
CMatrix CMatrix::operator- (const CMatrix& b) {
	CMatrix res;
	if (this->row == b.row && this->col == b.col) {
		res.row = this->row;
		res.col = this->col;
		res.setMatrix(res.row, res.col);
		for (int i = 0; i < res.row; i++) {
			for (int j = 0; j < res.col; j++) {
				res.arr[i][j] = this->arr[i][j] - b.arr[i][j];
			}
		}
	}
	return res;
}
CMatrix CMatrix::operator* (const CMatrix& b) {
	CMatrix res;
	if (this->col == b.row) {
		res.setMatrix(this->row, b.col);
		for (int i = 0; i < res.row; i++) {
			for (int j = 0; j < res.col; j++) {
				for (int k = 0; k < this->col; k++) {
					res.arr[i][j] += this->arr[i][k] * b.arr[k][j];
				}
			}
		}
	}
	return res;
}
CMatrix CMatrix::operator* (float k) {
	CMatrix res(*this);
	for (int i = 0; i < res.row; i++) {
		for (int j = 0; j < res.col; j++) {
			res.arr[i][j] *= k;
		}
	}
	return res;
}
CVector CMatrix::operator* (CVector b) {
	CVector res;
	if (this->col != b.getDim()) {
		return res;
	}

	res.setVector(this->row);
	for (int i = 0; i < this->row; i++) {
		for (int j = 0; j < this->col; j++) {
			res[i] += this->arr[i][j] * b[j];
		}
	}
	return res;
}
CMatrix& CMatrix::operator= (const CMatrix& b) {
	this->setMatrix(b.row, b.col);
	for (int i = 0; i < this->row; i++) {
		for (int j = 0; j < this->col; j++) {
			this->arr[i][j] = b.arr[i][j];
		}
	}
	return *this;
}
CVector& CMatrix::operator[] (int i) {
	return this->arr[i];
}
bool CMatrix::operator== (const CMatrix& b) {
	if (this->row != b.row || this->col != b.col) {
		return false;
	}
	for (int i = 0; i < this->row; i++) {
		for (int j = 0; j < this->col; j++) {
			if (this->arr[i][j] != b.arr[i][j]) {
				return false;
			}
		}
	}
	return true;
}
bool CMatrix::operator!= (const CMatrix& b) {
	if (this->row != b.row || this->col != b.col) {
		return true;
	}
	for (int i = 0; i < this->row; i++) {
		for (int j = 0; j < this->col; j++) {
			if (this->arr[i][j] != b.arr[i][j]) {
				return true;
			}
		}
	}
	return false;
}