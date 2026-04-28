#include "De.h"
#include <iostream>
#include <string>
#include <time.h>
using namespace std;

De::De() {
	sound = "Eeee ";
}
void De::Nhap() {
	cout << "Hay nhap so con De trong trang trai: ";
	cin >> quantity;
}
void De::Xuat() {
	cout << quantity;
}
void De::Breed() {
	srand((unsigned int)time(nullptr));
	int temp = quantity;
	for (int i = 0; i < temp; i++) {
		quantity += (rand() % 10) + 1; // Giới hạn số lượng sinh của mỗi con khoảng 1-10 con 
	}
}
void De::GiveMilk() {
	int temp = quantity;
	for (int i = 0; i < temp; i++) {
		milk += rand() % 11;
	}
}
void De::MakeSound() {
	cout << sound;
}