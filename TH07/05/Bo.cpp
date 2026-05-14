#include "Bo.h"
#include <time.h>
#include <iostream>
using namespace std;

int Bo::GiveMilk() {
	return rand() % 21;
}
void Bo::MakeSound() {
	cout << "Mooo ";
}
int Bo::getType() {
	return 1;
}