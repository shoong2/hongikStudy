#pragma once
#include <string>

class  Pet
{
	string name;
	int age;
public:
	 Pet(const string &name ="qqq", int age=0):name(name), age(age){}
	 virtual ~Pet() {};

	 string getName() { return name; }

	 int getAge() { return age; }

private:

};

