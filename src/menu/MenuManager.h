#ifndef MENUMANAGER_H

#define MENUMANAGER_H

// Input your code here... ex) #include <iostream>
#include <iostream>
#include <string>
#include "Menu.h"
#include "../ingredient/IngredientManager.h"
#include <vector>

class MenuManager {
public:
	static MenuManager& instance();
	std::vector<Menu> getMenuList();
	void setMenuList(std::vector<Menu> menuList);
	void addMenu();
	void deleteMenu();

private:
	MenuManager() {}
	std::vector<Menu> menuList;
};


#endif