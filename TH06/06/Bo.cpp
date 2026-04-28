#include "Bo.h"
#include <iostream>
#include <string>
#include <time.h>
using namespace std;

Bo::Bo() {
	sound = "Mooo ";
}
void Bo::Nhap() {
	cout << "Hay nhap so con bo trong trang trai: ";
	cin >> quantity;
}
void Bo::Xuat() {
	cout << quantity;
}
void Bo::Breed() {
	srand((unsigned int)time(nullptr));
	int temp = quantity;
	for (int i = 0; i < temp; i++) {
		quantity += (rand() % 10) + 1; // Giới hạn số lượng sinh của mỗi con khoảng 1-10 con 
	}
}
void Bo::GiveMilk() {
	int temp = quantity;
	for (int i = 0; i < temp; i++) {
		milk += rand() % 21;
	}
}
void Bo::MakeSound() {
	cout << sound;
}