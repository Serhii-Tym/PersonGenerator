#include "Person.h"
#include "PersonGenerator.h"
#include <iostream>

int main() {

    PersonGenerator generator;

    Person p1 = generator.generateRandomPerson();
    p1.describe();

    return 0;
}