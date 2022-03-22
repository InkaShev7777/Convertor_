#pragma once
#include<iostream>
class c_convertor
{
	double value;
public:
	c_convertor()
	{
		this->value = 0;
	}
	c_convertor(double value)
	{
		this->value = value;
	}
	void convert_from_km_to_m()
	{
		std::cout << this->value << "KM   =   " << this->value * 1000 << "M";
	}
	void convert_from_ml_to_L()
	{
		std::cout << this->value << "ML   =   " << this->value * 0.001 << "L";
	}
	void convert_from_T_to_kg()
	{
		std::cout << this->value << "T   =   " << this->value * 1000 << "KG";
	}
};

