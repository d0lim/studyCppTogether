#include "MenuManager.h"

// class MenuManager {
// public:
// 	std::vector<Menu> getMenuList();
// 	void setMenuList(std::vector<Menu> menuList);
// 	void addMenu();
// 	void deleteMenu();

// private:
// 	std::vector<Menu> menuList;
// };

std::vector<Menu> MenuManager::getMenuList() {
	return menuList;
}

void MenuManager::setMenuList(std::vector<Menu> menuList) {
	this->menuList = menuList;
}

void MenuManager::addMenu() {
	std::string name;
	std::vector<Ingredient> ingredientList;
	unsigned int price = 0;
	unsigned int discount = 0;
	std::cout << "Input Menu Name : ";
	std::cin >> name;
	// get ingredients' list
	// need iterator
	std::vector<Ingredient> list = IngredientManager.instance().getMilkList();
	std::vector<Ingredient>::iterator iter;
	int i = 1;
	for (iter = list.begin(); iter != list.end(); ++iter){
        std::cout << i << ". " << *iter << endl;
		i++;
    }
	// Select ingredient and count
	
	std::vector<Ingredient> list = IngredientManager.instance().getCoffeeBeanList();
	iter = list.begin();
	int i = 1;
	for (iter = list.begin(); iter != list.end(); ++iter){
        std::cout << i << ". " << *iter << endl;
		i++;
    }
	// Select ingredient and count
	
	std::vector<Ingredient> list = IngredientManager.instance().getOtherIngredientList();
	iter = list.begin();
	int i = 1;
	for (iter = list.begin(); iter != list.end(); ++iter){
        std::cout << i << ". " << *iter << endl;
		i++;
    }
	// Select ingredient and count
	
	// calculate price
	iter = ingredientList.begin();
	for (; iter != ingredientList.end(); ++iter) {
		price += *iter.getPrice();
	}
	
	// Set discount
	
	
	
	// Make object
	Menu *newMenu = new Menu(name, ingredientList, price, discount);
	menuList.push_back(*newMenu);
	
}

void MenuManager::deleteMenu() {
	
}
