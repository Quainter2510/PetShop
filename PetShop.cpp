#include "PetShop.h"

PetShop::PetShop(const std::string name):
	_name(name) {}

PetShop::PetShop(const PetShop& other):
	_name(other._name) {
	std::vector <Pet*> _cages(other._cages.size());
	for (size_t i = 0; i < other._cages.size(); i++) {
		_cages[i] = other._cages[i];
	}
}

PetShop& PetShop::operator=(const PetShop& other) {
	_name = other._name;
	std::vector <Pet*> _cages(other._cages.size());
	for (size_t i = 0; i < other._cages.size(); i++) {
		_cages[i] = other._cages[i];
	}
	return *this;
}

Pet* PetShop::get() {
	Pet* temp = _cages[_cages.size() - 1];
	_cages.pop_back();
	return temp;
}

void PetShop::put(Pet* animal) {
	_cages.push_back(animal);
}

Pet* PetShop::operator[](int n) {
	return _cages[n];
}

void PetShop::operator<<(Pet* animal) {
	_cages.push_back(animal);
}

Pet* PetShop::operator>>(Pet& animal) {
	Pet* temp = _cages[_cages.size() - 1];
	_cages.pop_back();
	return temp;
}

bool PetShop::operator==(PetShop& other) {
	return _cages == other._cages;
}

std::ostream& operator<<(std::ostream& out, PetShop& shop) {
	out << shop._name << " ";
	for (int i = 0; i < shop._cages.size(); i++) {
		out << "cage#" << i + 1  << " " << shop._cages[i] << "\n";
	}
	return out;
}