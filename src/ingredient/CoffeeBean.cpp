#include "CoffeeBean.h"

CoffeeBean::CoffeeBean(std::string _name, unsigned int _price, unsigned int _count) : name(_name), price(_price), count(_count) {}

CoffeeBean::CoffeeBean(const CoffeeBean& copy) : price(copy.price), count(copy.count)
{
	name = copy.name;
}

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

void CoffeeBean::setCount(unsigned int count) {
	this->count = count;
}

void CoffeeBean::addCount(int addNum) {
	this->count += addNum;
}

void CoffeeBean::reduceCount(int reduceNum) {
	this->count -= reduceNum;
}