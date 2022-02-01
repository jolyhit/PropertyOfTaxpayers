#include "CountryHouse.h"
#include <iostream>

CountryHouse::CountryHouse(float worth) : Property(worth) {}

const void CountryHouse::tax() {
	float tax = this->worth / 500;
	std::cout << tax << std::endl;
}