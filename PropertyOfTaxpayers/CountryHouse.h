#pragma once
#include "Property.h"
class CountryHouse : public Property
{
public:
	CountryHouse(float);
	virtual const void tax();
};