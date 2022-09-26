#pragma once
#include "Pet.h"

class Dog :
	public Pet
{
public:
	Dog(const string &name, int age): Pet(name, age)
	{

	}
};