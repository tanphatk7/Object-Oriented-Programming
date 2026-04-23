#include "CVector.h"
#include <iostream>
using namespace std;

CVector::CVector() {
	dim = 0;
	vec = nullptr;
}
CVector::CVector(const CVector& b) {
	this->dim = b.dim;
	this->vec = new float[this->dim];
	for (int i = 0; i < this->dim; i++) {
		this->vec[i] = b.vec[i];
	}
}
CVector::~CVector() {
	delete[] vec;
}
int CVector::getDim() {
	return dim;
}
void CVector::setVector(int num) {
	delete[] vec;
	dim = num;
	vec = new float[dim] {0};
}
CVector CVector::operator+ (const CVector& b) {
	CVector res;
	if (this->dim != b.dim) {
		return res;
	}
	res.dim = this->dim;
	res.vec = new float[res.dim];

	for (int i = 0; i < this->dim; i++) {
		res.vec[i] = this->vec[i] + b.vec[i];
	}
	return res;
}
CVector CVector::operator- (const CVector& b) {
	CVector res;
	if (this->dim != b.dim || this->dim == 0) {
		return res;
	}
	res.dim = this->dim;
	res.vec = new float[res.dim];

	for (int i = 0; i < this->dim; i++) {
		res.vec[i] = this->vec[i] - b.vec[i];
	}
	return res;
}
float CVector::operator* (const CVector& b) {
	if (this->dim != b.dim || this->dim == 0) {
		return 0;
	}
	float res = 0;
	for (int i = 0; i < this->dim; i++) {
		res += this->vec[i] * b.vec[i];
	}
	return res;
}
CVector CVector::operator* (float k) {
	CVector res(*this);
	for (int i = 0; i < res.dim; i++) {
		res.vec[i] *= k;
	}
	return res;
}
CVector& CVector::operator= (const CVector& b) {
	this->dim = b.dim;

	delete[] this->vec;
	this->vec = new float[this->dim];
	
	for (int i = 0; i < this->dim; i++) {
		this->vec[i] = b.vec[i];
	}
	return *this;
}
float& CVector::operator[] (int idx) {
	return this->vec[idx];
}
bool CVector::operator== (const CVector& b) {
	if (this->dim != b.dim) {
		return false;
	}
	for (int i = 0; i < this->dim; i++) {
		if (this->vec[i] != b.vec[i]) {
			return false;
		}
	}
	return true;
}
bool CVector::operator!= (const CVector& b) {
	if (this->dim != b.dim) {
		return true;
	}
	for (int i = 0; i < this->dim; i++) {
		if (this->vec[i] != b.vec[i]) {
			return true;
		}
	}
	return false;
}