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
Ingredient::Ingredient(std::string _category, std::string _name, unsigned int _price, unsigned int _count) : category(_category), name(_name), price(_price), count(_count) {}

Ingredient::Ingredient(std::string _name, unsigned int _price, unsigned int _count) : name(_name), price(_price), count(_count) {}


std::string Ingredient::getCategory() {
	return category;
}

void Ingredient::setCategory(std::string category) {
	this->name = category;
}

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

void Ingredient::setCount(unsigned int count) {
	this->count = count;
}

void Ingredient::addCount(int addNum) {
	this->count += addNum;
}

void Ingredient::reduceCount(int reduceNum) {
	this->count -= reduceNum;
}