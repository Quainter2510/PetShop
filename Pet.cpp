#include "Pet.h"

Pet::Pet(const std::string name, const std::string breed, uint age):
	_age(age), _name(name), _breed(breed) {}

Pet::Pet(const Pet& other) { // мб список инициализации?
	_name = other._name;
	_breed = other._breed;
	_age = other._age;
}

Pet& Pet::operator=(const Pet& other) {
	_name = other._name;
	_breed = other._breed;
	_age = other._age;
	return *this;
}



Cat::Cat(const std::string name, const std::string breed, uint age) :
	Pet(name, breed, age) {}

void Cat::say() const {
	std::cout << "I`m a cat!\n";
}

void Cat::play() const {
	std::cout << "Miay!\n"; // ???
}

std::ostream& operator<<(std::ostream& out, Cat* animal) {
	out << animal->_name << ' ';
	out << animal->_breed << " ";
	out << animal->_age << " ";
	out << animal->_species;
	return out;
}

std::ostream& operator<<(std::ostream& out, Dog& animal) {
	out << animal._name << ' ';
	out << animal._breed << " ";
	out << animal._age << " ";
	out << animal._species;
	return out;
}

Dog::Dog(const std::string name, const std::string breed, uint age) :
	Pet(name, breed, age) {}

void Dog::say() const {
	std::cout << "I`m a dog!\n";
}

void Dog::play() const {
	std::cout << "Wow!\n";
}

