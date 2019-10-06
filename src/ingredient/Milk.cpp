#include "Milk.h"

Milk::Milk(std::string _name, unsigned int _price, unsigned int _count) : name(_name), price(_price), count(_count) {}

Milk::Milk(const Milk& copy) : price(copy.price), count(copy.count)
{
	name = copy.name;
}

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

void Milk::setCount(unsigned int count) {
	this->count = count;
}

void Milk::addCount(int addNum) {
	this->count += addNum;
}

void Milk::reduceCount(int reduceNum) {
	this->count -= reduceNum;
}