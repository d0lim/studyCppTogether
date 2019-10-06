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

static MenuManager& MenuManager::instance() {
	static MenuManager* instance = new MenuManager;
	return instance;
}

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
	
	// Select ingredient and count
	while(true) {
		std::cout << "Current ingredients are ";
		for (iter = ingredientList.begin(); iter != ingredientList.end(); ++iter) {
			std::cout << iter->getName() << ", ";
		}
		std::cout << std::endl;
		int i = 1;
		for (iter = list.begin(); iter != list.end(); ++iter){
			std::cout << i << ". " << iter->name << std::endl;
			i++;
		}
		int selection = 0;
		std::cout << "Select the Milk to add by number(input 0 to go next) : ";
		std::cin >> selection;
		if (selection == 0)
			break ;
		else {
			Milk temp(list[selection - 1]);	
			ingredientList.push_back(temp);
		}
		
		
	}
	
	list = IngredientManager.instance().getCoffeeBeanList();
	
	while(true) {
		std::cout << "Current ingredients are ";
		for (iter = ingredientList.begin(); iter != ingredientList.end(); ++iter) {
			std::cout << iter->getName() << ", ";
		}
		std::cout << std::endl;
		int i = 1;
		for (iter = list.begin(); iter != list.end(); ++iter){
			std::cout << i << ". " << iter->getName() << std::endl;
			i++;
		}
		int selection = 0;
		std::cout << "Select the Coffee Bean to add by number(input 0 to go next) : ";
		std::cin >> selection;
		if (selection == 0)
			break ;
		else {
			CoffeeBean temp(list[selection - 1]);	
			ingredientList.push_back(temp);
		}
	}
	
	// Select ingredient and count
	
	list = IngredientManager.instance().getOtherIngredientList();
	
	while(true) {
		std::cout << "Current ingredients are ";
		for (iter = ingredientList.begin(); iter != ingredientList.end(); ++iter) {
			std::cout << iter->getName() << ", ";
		}
		std::cout << std::endl;
		int i = 1;
		for (iter = list.begin(); iter != list.end(); ++iter){
			std::cout << i << ". " << iter->getName() << std::endl;
			i++;
		}
		int selection = 0;
		std::cout << "Select the Coffee Bean to add by number(input 0 to go next) : ";
		std::cin >> selection;
		if (selection == 0)
			break ;
		else {
			OtherIngredient temp(list[selection - 1]);	
			ingredientList.push_back(temp);
		}
	}
	
	// Select ingredient and count
	
	// calculate price
	iter = ingredientList.begin();
	for (; iter != ingredientList.end(); ++iter) {
		price += iter->getPrice();
	}
	
	// Set discount
	
	
	
	// Make object
	Menu *newMenu = new Menu(name, ingredientList, price, discount);
	menuList.push_back(*newMenu);
	
}

void MenuManager::deleteMenu() {
	return ;
}
