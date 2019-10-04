#include "Milk.h"

std::string Milk::getName() {
	return name;
}

void Milk::setName(std::string name) {
	this->name = name;
}

unsigned int Milk::getPrice() {
	return price;
}

void Milk::setPrice(unsigned int price) {
	this->price = price;
}

unsigned int Milk::getCount() {
	return count;
}

void Intredient::setCount(unsigned int count) {
	this->count = count;
}

void Milk::addCount(int addNum) {
	this->count += addNum;
}

void Milk::reduceCount(int reduceNum) {
	this->count -= reduceNum;
}