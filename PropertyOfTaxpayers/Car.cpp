#include "Car.h"
#include <iostream>

Car::Car(float worth) : Property(worth) {}

const void Car::tax() {
	float tax = this->worth / 200;
	std::cout << tax << std::endl;
}