#pragma once
#include "Property.h"
class Appartment : public Property
{
public:
	Appartment(float);
	virtual const void tax();
};