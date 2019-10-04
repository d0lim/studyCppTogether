#include "OtherOtherIngredient.h"

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