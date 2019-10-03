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
	unsigned int price;
	unsigned int discount;
	std::cout << "Input Menu Name : ";
	std::cin >> name;
	
}

void MenuManager::deleteMenu() {
	
}
