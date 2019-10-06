#ifndef COFFEEBEAN_H

#define COFFEEBEEAN_H

// Input your code here... ex) #include <iostream>
#include <cstring>
#include <iostream>
#include "Ingredient.h"


class CoffeeBean : public Ingredient {
public:
	CoffeeBean(std::string _name, unsigned int _price, unsigned int _count);
	CoffeeBean(const CoffeeBean& copy);
	std::string getName();
	void setName(std::string name);
	unsigned int getPrice();
	void setPrice(unsigned int price);
	unsigned int getCount();
	void setCount(unsigned int count);
	void addCount(int addNum);
	void reduceCount(int reduceNum);
private:
	std::string name;
	unsigned int price;
	unsigned int count;
};


#endif