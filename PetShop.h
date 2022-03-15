#pragma once
#include "Pet.h"
class PetShop {
public:
	PetShop(const std::string name);
	
	PetShop(const PetShop& other); // explicit
	PetShop& operator=(const PetShop& other);
	//PetShop(PetShop&& other);
	//PetShop& operator=(PetShop&& other);
	//~PetShop();

	Pet* get();
	void put(Pet* animal);
	Pet* operator[](int n);
	void operator<<(Pet* animal);
	Pet* operator>>(Pet& animal);          
	bool operator==(PetShop& other);
	friend std::ostream& operator<<(std::ostream& out, PetShop& other);
	// petshop1 << dog1;
	// >> извлечение 
	// << вставка

private:
	std::vector <Pet*> _cages;
	std::string _name;
};