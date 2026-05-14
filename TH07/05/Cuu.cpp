#include "Cuu.h"
#include <time.h>
#include <iostream>
using namespace std;

int Cuu::GiveMilk() {
	return rand() % 6;
}
void Cuu::MakeSound() {
	cout << "Beee ";
}
int Cuu::getType() {
	return 2;
}