#ifndef MENUMANAGER_H

#define MENUMANAGER_H

// Input your code here... ex) #include <iostream>
#include <iostream>
#include <vector>
#include <string>
#include "Menu.h"

class MenuManager {
public:
	std::vector<Menu> getMenuList();
	void setMenuList(std::vector<Menu> menuList);
	void addMenu();
	void deleteMenu();

private:
	std::vector<Menu> menuList;
};


#endif