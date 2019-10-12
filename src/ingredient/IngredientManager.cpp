#include "IngredientManager.h"

IngredientManager* IngredientManager::ins = 0; // or NULL, or nullptr in c++11

std::vector<Ingredient> IngredientManager::getIngredientList() {
	return ingredientList;
}
void IngredientManager::setIngredientList(std::vector<Ingredient> ingredientList) {
	this->ingredientList = ingredientList;
}

std::vector<std::string> IngredientManager::getCategoryList() {
    return categoryList;
}
void IngredientManager::setCategoryList(std::vector<std::string> categoryList) {
    this->categoryList = categoryList;
}

void IngredientManager::addCategory() {
    std::string newCategory;
    std::cout << "Input new category: ";
    std::cin >> newCategory;
    categoryList.push_back(newCategory);
}

void IngredientManager::removeCategory() {
    return ;
}

void IngredientManager::addIngredient() {
    std::string category;
    int selection = 0;
	std::string name;
	unsigned int price = 0;
	unsigned int count = 1;
	
	std::vector<std::string>::iterator iter;
    int i = 1;
    for (iter = categoryList.begin(); iter != categoryList.end(); ++iter) {
        std::cout << i << ". " << *iter << std::endl;
    }
    std::cout << "Select Category : ";
    std::cin >> selection;
    category = categoryList[selection - 1];
	std::cout << "Input name : ";
	std::cin >> name;
	std::cout << "Input price : ";
	std::cin >> price;
	/* Wonder whether we need count on ingredient class. */
	// std::cout << "Input count : ";
	// std::cin >> count;
	
	Ingredient newIngredient(category, name, price, count);
	ingredientList.push_back(newIngredient);
}

void IngredientManager::removeIngredient() {
	return ;
}