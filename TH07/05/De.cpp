#include "De.h"
#include <time.h>
#include <iostream>
using namespace std;

int De::GiveMilk() {
	return rand() % 11;
}
void De::MakeSound() {
	cout << "Eeee ";
}
int De::getType() {
	return 3;
}