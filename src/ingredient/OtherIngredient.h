#ifndef OTHERINGREDIENT_H

#define OTHERINGREDIENT_H

// Input your code here... ex) #include <iostream>

#include "Ingredient.h"

class OtherIngredient : public Ingredient {
	OtherIngredient(std::string _name, unsigned int _price, unsigned int _count) : name(_name), price(_price), count(_count) {}
	OtherIngredient(const OtherIngredient& copy) : price(copy.price), count(copy.count)
    {
        int len = strlen(copy.name) + 1;
        name = new char[len];
        strcpy_s(name, len, copy.name);  // CodeBlocks일 경우에는 strcpy(name, copy.name)을 사용한다.
    }
}



#endif