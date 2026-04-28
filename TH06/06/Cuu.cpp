#include "Cuu.h"
#include <iostream>
#include <string>
#include <time.h>
using namespace std;

Cuu::Cuu() {
	sound = "Beee ";
}
void Cuu::Nhap() {
	cout << "Hay nhap so con Cuu trong trang trai: ";
	cin >> quantity;
}
void Cuu::Xuat() {
	cout << quantity;
}
void Cuu::Breed() {
	srand((unsigned int)time(nullptr));
	int temp = quantity;
	for (int i = 0; i < temp; i++) {
		quantity += (rand() % 10) + 1; // Giới hạn số lượng sinh của mỗi con khoảng 1-10 con
	}
}
void Cuu::GiveMilk() {
	int temp = quantity;
	for (int i = 0; i < temp; i++) {
		milk += rand() % 6;
	}
}
void Cuu::MakeSound() {
	cout << sound;
}