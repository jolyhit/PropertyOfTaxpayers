#pragma once
class Property
{
public:
	Property(float);
	float worth = 0;
	virtual const void tax();
};