#include "Menu.h"

// class Menu {
// public:
// 	std::string getName();
// 	void setName(std::string name);
// 	std::vector getIngredientList();
// 	void setIngredientList(std::vector ingredientList);
// 	unsigned int getPrice();
// 	void setPrice(unsigned int price);
// 	unsigned int getDiscount();
// 	void setDiscount(unsigned int discount);
	
	
// private:
// 	std::string name;
// 	std::vector<Ingredient> ingredientList;
// 	unsigned int price;
// 	unsigned int discount;
	
// };

std::string Menu::getName() {
	return name;
}

void Menu::setName(std::string name) {
	this->name = name;
}

std::vector Menu::getIngredientList() {
	return ingredientList;
}

void Menu::setIngredientList(std::vector ingredientList) {
	this->ingredientList = ingredientList;
}

unsigned int Menu::getPrice() {
	return price;
}

void Menu::setPrice(unsigned int price) {
	this->price = price;
}

unsigned int Menu::getDiscount() {
	return discount;
}

void Menu::setDiscount(unsigned int discount) {
	this->discount = discount;
}