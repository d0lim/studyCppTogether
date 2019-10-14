#ifndef MENUMANAGER_H

#define MENUMANAGER_H

// Input your code here... ex) #include <iostream>
#include <iostream>
#include <string>
#include "Menu.h"
#include <vector>
#include <algorithm>
#include "../ingredient/IngredientManager.h"


class MenuManager {
public:
	std::vector<Menu> getMenuList();
	void setMenuList(std::vector<Menu> menuList);
	void addMenu();
	void deleteMenu();
	static MenuManager* getInstance()
    {
        if (!ins) {
			ins = new MenuManager();
		}
        return ins;
    }
	
	void saveMenuList(std::string path);
	void loadMenuList(std::string path);


private:
	
	MenuManager(){}
    MenuManager(const MenuManager& other){}
    ~MenuManager(){}
	std::vector<Menu> menuList;
	static MenuManager* ins;
};





#endif