#ifndef MENU_H

#define MENU_H

// Input your code here... ex) #include <iostream>
#include <string>
#include <vector>
#include "../ingredient/Ingredient.h"

class Menu {
public:
	Menu(std::string _name, std::vector<Ingredient> _ingredientList, unsigned int _price, unsigned int _discount) : name(_name), ingredientList(_ingredientList), price(_price), discount(_discount) {}
	std::string getName();
	void setName(std::string name);
	std::vector getIngredientList();
	void setIngredientList(std::vector ingredientList);
	unsigned int getPrice();
	void setPrice(unsigned int price);
	unsigned int getDiscount();
	void setDiscount(unsigned int discount);
	
	
private:
	std::string name;
	std::vector<Ingredient> ingredientList;
	unsigned int price;
	unsigned int discount;
	
};


#endif