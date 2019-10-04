#include "CoffeeBean.h"

std::string CoffeeBean::getName() {
	return name;
}

void CoffeeBean::setName(std::string name) {
	this->name = name;
}

unsigned int CoffeeBean::getPrice() {
	return price;
}

void CoffeeBean::setPrice(unsigned int price) {
	this->price = price;
}

unsigned int CoffeeBean::getCount() {
	return count;
}

void Intredient::setCount(unsigned int count) {
	this->count = count;
}

void CoffeeBean::addCount(int addNum) {
	this->count += addNum;
}

void CoffeeBean::reduceCount(int reduceNum) {
	this->count -= reduceNum;
}