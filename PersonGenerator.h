#ifndef PERSON_GENERATOR_H
#define PERSON_GENERATOR_H	

#include "Person.h"
#include <vector>
#include <string>

class PersonGenerator
{
private:
	// an array of parameters to choose from
	std::vector<std::string> names = { "Alice", "Bob", "Charlie", "David", "Eve" };

public:
	Person generateRandomPerson();
};

#endif // PERSON_GENERATOR