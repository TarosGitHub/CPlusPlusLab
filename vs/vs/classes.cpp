// ƒNƒ‰ƒX

#include <iostream>
#include "classes.h"

std::string Person::get_name() const
{
	return this->name;
}

int Person::get_age() const
{
	return this->age;
}

void Person::show() const
{
	using namespace std;

	cout << "name: " << this->name << endl;
	cout << "age: " << this->age << endl;
}

void Person::set_name(std::string name)
{
	this->name = name;
}

void Person::set_age(int age)
{
	this->age = age;
}
