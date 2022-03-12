#pragma once
#include <iostream>
#include <vector>
typedef unsigned int uint;
class Pet {
public:
	Pet(std::string name, std::string breed, uint age);
	virtual void say() = 0;
	virtual void play() = 0;
	virtual friend std::ostream& operator<< (std::ostream& out, Pet& animal);
protected:
	std::string _name;
	std::string _breed;
	uint age;
};

class Cat : public Pet {
public :
	Cat();
	void say() override;
	void play() override;
	virtual friend std::ostream& operator<< (std::ostream& out, Cat& animal); //?
private:
	const std::string species = "cat";
};

class Dog : public Pet {
public :
	Dog();
	void say() override;
	void play() override;
	virtual friend std::ostream& operator<< (std::ostream& out, Dog& animal); //?
private:
	const std::string species = "dog";
};

class PetShop {
public:
	PetShop();
	
	PetShop(const PetShop& other); // explicit
	PetShop& operator=(const PetShop& other);
	PetShop(PetShop&& other);
	PetShop& operator=(PetShop&& other);
	~PetShop();

	Pet* get();
	void put(Pet* animal);
	Pet* operator[](int n);
	void operator<<(Pet* animal);
	//Pet* operator>>();            ??????????
	bool operator==(PetShop*);


private:
	std::vector <Pet&> _cages;

};