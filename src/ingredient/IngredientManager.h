#ifndef INGREDIENTMANAGER_H

#define INGREDIENTMANAGER_H

// Input your code here... ex) #include <iostream>
#include <vector>
#include "Ingredient.h"
#include "CoffeeBean.h"
#include "Milk.h"
#include "OtherIngredient.h"


class IngredientManager {
public:
	static IngredientManager& instance();
	
	std::vector<Milk> getMilkList();
	void setMilkList(std::vector<Milk> milkList);
	std::vector<CoffeeBean> getCoffeeBeanList();
	void setCoffeeBeanList(std::vector<CoffeeBean> coffeeBeanList);
	std::vector<OtherIngredient> getOtherIngredientList();
	void setOtherIngredientList(std::vector<OtherIngredient> otherIngredientList);
	void addCoffeeBean();
	void removeCoffeeBean();
	void addMilk();
	void removeMilk();
	void addOtherIngredient();
	void removeOtherIngredient();
	
	
private:
	IngredientManager() {}
	std::vector<Milk> milkList;
	std::vector<CoffeeBean> coffeeBeanList;
	std::vector<OtherIngredient> otherIngredientList;
	
};



#endif