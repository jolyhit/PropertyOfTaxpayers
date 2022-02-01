#pragma once
#include "Property.h"
class Car : public Property
{
public:
	Car(float);
	virtual const void tax();
};

