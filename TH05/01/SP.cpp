#include "SP.h"

SP::SP(float m, float n) {
	Set(m, n);
}
void SP::Set(float m, float n) {
	thuc = m;
	ao = n;
}
SP operator+ (SP a, SP b) {
	SP c;
	c.thuc = a.thuc + b.thuc;
	c.ao = a.ao + b.ao;
	return c;
}
SP operator- (SP a, SP b) {
	SP c;
	c.thuc = a.thuc - b.thuc;
	c.ao = a.ao - b.ao;
	return c;
}
SP operator* (SP a, SP b) {
	SP c;
	c.thuc = a.thuc * b.thuc - a.ao * b.ao;
	c.ao = a.thuc * b.ao - a.ao * b.thuc;
	return c;
}
SP operator/ (SP a, SP b) {
	SP c;
	float mau = b.thuc * b.thuc + b.ao * b.ao;
	c.thuc = (a.thuc * b.thuc + a.ao * b.ao) / mau;
	c.ao = (b.thuc * a.ao - a.thuc * b.ao) / mau; 
	return c;
}

bool operator== (SP a, SP b) {
	return (a.thuc == b.thuc && a.ao == b.ao);
}
bool operator!= (SP a, SP b) {
	return (a.thuc != b.thuc || a.ao != b.ao);
}
bool operator> (SP a, SP b) {
	float thismol = a.thuc * a.thuc + a.ao * a.ao;
	float bmol = b.thuc * b.thuc + b.ao * b.ao;
	return (thismol > bmol); // So sánh moldule của 2 số phức
}
bool operator>= (SP a, SP b) {
	float thismol = a.thuc * a.thuc + a.ao * a.ao;
	float bmol = b.thuc * b.thuc + b.ao * b.ao;
	return (thismol >= bmol); // So sánh moldule của 2 số phức
}
bool operator< (SP a, SP b) {
	float thismol = a.thuc * a.thuc + a.ao * a.ao;
	float bmol = b.thuc * b.thuc + b.ao * b.ao;
	return (thismol < bmol); // So sánh moldule của 2 số phức
}
bool operator<= (SP a, SP b) {
	float thismol = a.thuc * a.thuc + a.ao * a.ao;
	float bmol = b.thuc * b.thuc + b.ao * b.ao;
	return (thismol <= bmol); // So sánh moldule của 2 số phức
}