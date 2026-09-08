#pragma once
#ifndef Person_h
#define Person_h

#include <iostream>
#include <string>

class Person
{
private:
	int age;
	float height;
	std::string name;

public:
	Person();
	
	Person(int age, float height, std::string name);

	void setAge(int age);
	int getAge();
	void setHeight(float height);
	float getHeight();
	void setName(std::string name);
	std::string getName();

	void describe();
};
#endif // !Person_h