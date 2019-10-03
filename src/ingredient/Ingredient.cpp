#include "Ingredient.h"

// class Ingredient {
// public:
// 	std::string getName();
// 	void setName(std::string name);
// 	unsigned int getPrice();
// 	void setPrice(unsigned int price);
// 	unsigned int getCount();
// 	void setCount(unsinged int count);
// 	void addCount(int addNum);
// 	void reduceCount(int reduceNum);
	
// private:
// 	std::string name;
// 	unsigned int price;
// 	unsigned int count;
// };

std::string Ingredient::getName() {
	return name;
}

void Ingredient::setName(std::string name) {
	this->name = name;
}

unsigned int Ingredient::getPrice() {
	return price;
}

void Ingredient::setPrice(unsigned int price) {
	this->price = price;
}

unsigned int Ingredient::getCount() {
	return count;
}

void Intredient::setCount(unsigned int count) {
	this->count = count;
}

void Ingredient::addCount(int addNum) {
	this->count += addNum;
}

void Ingredient::reduceCount(int reduceNum) {
	this->count -= reduceNum;
}