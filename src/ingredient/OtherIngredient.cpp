#include "OtherIngredient.h"

OtherIngredient::OtherIngredient(std::string _name, unsigned int _price, unsigned int _count) : name(_name), price(_price), count(_count) {}

OtherIngredient::OtherIngredient(const OtherIngredient& copy) : price(copy.price), count(copy.count)
{
	name = copy.name;
}


std::string OtherIngredient::getName() {
	return name;
}

void OtherIngredient::setName(std::string name) {
	this->name = name;
}

unsigned int OtherIngredient::getPrice() {
	return price;
}

void OtherIngredient::setPrice(unsigned int price) {
	this->price = price;
}

unsigned int OtherIngredient::getCount() {
	return count;
}

void Intredient::setCount(unsigned int count) {
	this->count = count;
}

void OtherIngredient::addCount(int addNum) {
	this->count += addNum;
}

void OtherIngredient::reduceCount(int reduceNum) {
	this->count -= reduceNum;
}