#include "PersonGenerator.h"
#include <random>

Person PersonGenerator::generateRandomPerson()
{
	// Create a random number generator
	std::random_device rd;
	std::mt19937 gen(rd());

	// Generate a random age between 1 and 100
	std::uniform_int_distribution<> ageDist(1, 100);
	int age = ageDist(gen);

	// Generate a random height between 1.0 and 2.5 meters
	std::uniform_real_distribution<> heightDist(1.0, 2.5);
	float height = heightDist(gen);

	// Generate a random name from the names vector
	std::uniform_int_distribution<> nameDist(0, names.size() - 1);
	std::string name = names[nameDist(gen)];

	// Create and return a new Person object with the generated parameters
	return Person(age, height, name);
}