#include "PS.h"

int gcd(int m, int n) {
	m = abs(m); n = abs(n);
	if (n == 0) return m;
	return gcd(n, m % n);
}

PS::PS(int m, int n) {
	tu = m;
	mau = n;
}
void PS::RutGon() {
	int ucln = gcd(tu, mau);
	tu /= ucln;
	mau /= ucln;
}
PS operator+ (PS a, PS b) {
	PS c;
	c.tu = a.tu * b.mau + b.tu * a.mau;
	c.mau = a.mau * b.mau;
	c.RutGon();
	return c;
}
PS operator- (PS a, PS b) {
	PS c;
	c.tu = a.tu * b.mau - b.tu * a.mau;
	c.mau = a.mau * b.mau;
	c.RutGon();
	return c;
}
PS operator* (PS a, PS b) {
	PS c;
	c.tu = a.tu * b.tu;
	c.mau = a.mau * b.mau;
	c.RutGon();
	return c;
}
PS operator/ (PS a, PS b) {
	PS c;
	c.tu = a.tu * b.mau;
	c.mau = a.mau * b.tu;
	c.RutGon();
	return c;
}

bool operator== (PS a, PS b) {
	return (a.tu == b.tu && a.mau == b.mau);
}
bool operator!= (PS a, PS b) {
	return (a.tu != b.tu || a.mau != b.mau);
}
bool operator> (PS a, PS b) {
	int this_tu = a.tu * b.mau;
	int b_tu = b.tu * a.mau;
	return (this_tu > b_tu);
}
bool operator>= (PS a, PS b) {
	int this_tu = a.tu * b.mau;
	int b_tu = b.tu * a.mau;
	return (this_tu >= b_tu);
}
bool operator< (PS a, PS b) {
	int this_tu = a.tu * b.mau;
	int b_tu = b.tu * a.mau;
	return (this_tu < b_tu);
}
bool operator<= (PS a, PS b) {
	int this_tu = a.tu * b.mau;
	int b_tu = b.tu * a.mau;
	return (this_tu <= b_tu);
}