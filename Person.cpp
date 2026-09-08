#include "Person.h"

Person::Person() {
	age = 0;
	height = 0.0f;
	name = "";
}

Person::Person(int age, float height, std::string name) {
	this->age = age;
	this->height = height;
	this->name = name;
}

void Person::setAge(int age) {
	this->age = age;
}

int Person::getAge() {
	return age;
}

void Person::setHeight(float height) {
	this->height = height;
}

float Person::getHeight() {
	return height;
}

void Person::setName(std::string name) {
	this->name = name;
}

std::string Person::getName() {
	return name;
}

void Person::describe() {
	std::cout << "Hello, ma name is " << name << std::endl;
	std::cout << "I am " << age << " years old" << std::endl;
	std::cout << "I am " << height << " meters tall" << std::endl;
}