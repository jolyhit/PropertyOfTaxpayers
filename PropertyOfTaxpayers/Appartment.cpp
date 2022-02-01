#include "Appartment.h"
#include <iostream>

Appartment::Appartment(float worth) : Property(worth) {};

const void Appartment::tax() {
	float tax = this->worth / 1000;
	std::cout << tax << std::endl;
}