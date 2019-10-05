#ifndef COFFEEBEAN_H

#define COFFEEBEEAN_H

// Input your code here... ex) #include <iostream>
#include "Ingredient.h"

class CoffeeBean : public Ingredient {
public:
	CoffeeBean(std::string _name, unsigned int _price, unsigned int _count) : name(_name), price(_price), count(_count) {}
	CoffeeBean(const CoffeeBean& copy) : price(copy.price), count(copy.count)
    {
        int len = strlen(copy.name) + 1;
        name = new char[len];
        strcpy_s(name, len, copy.name);  // CodeBlocks일 경우에는 strcpy(name, copy.name)을 사용한다.
    }
}


#endif