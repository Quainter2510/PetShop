#pragma once
#include <iostream>
#include <vector>
typedef unsigned int uint;
class Pet {
public:
	//Pet();
	Pet(const Pet& other); // explicit
	Pet& operator=(const Pet& other);

	Pet(const std::string name, const std::string breed, uint age);
	virtual void say() const = 0;
	virtual void play() const = 0;
	virtual std::string getSpecies() = 0;
protected:
	std::string _name;
	std::string _breed;
	uint _age;
};

class Cat : public Pet {
public :
	//Cat();
	Cat(const std::string name, const std::string breed, uint age);
	void say() const override;
	void play() const  override;
	std::string getSpecies() override;
	friend std::ostream& operator<<(std::ostream& out, Cat* animal);
private:
	const std::string _species = "cat";
};

class Dog : public Pet {
public :
	Dog(const std::string name, const std::string breed, uint age);
	void say() const override;
	void play() const override;
	std::string getSpecies() override;

	friend std::ostream& operator<<(std::ostream& out, Dog& animal);
private:
	const std::string _species = "dog";
};

//class PetShop {
//public:
//	PetShop();
//	
//	PetShop(const PetShop& other); // explicit
//	PetShop& operator=(const PetShop& other);
//	PetShop(PetShop&& other);
//	PetShop& operator=(PetShop&& other);
//	~PetShop();
//
//	Pet* get();
//	void put(Pet* animal);
//	Pet* operator[](int n);
//	void operator<<(Pet* animal);
//	//Pet* operator>>();            ??????????
//	bool operator==(PetShop*);
//	// petshop1 << dog1;
//	// >> извлечение 
//	// << вставка
//
//private:
//	std::vector <Pet&> _cages;
//};