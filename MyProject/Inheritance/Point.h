#pragma once
#include <iostream>
using namespace std;
class Point
{
	int x, y;
public:
	Point(int a = 0, int b = 0) : x(a), y(b) {};
	void Nhap() {
		cin >> x >> y;
	}
	void Xuat() {
		cout << "(" << x << ", " << y << ")";
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
	void set(int a, int b) {
		x = a;
		y = b;
	}
};

