#include "./menu/MenuManager.h"
#include "./ingredient/IngredientManager.h"

void showMenu();
void editMenu();
void editIngredient();
void ingreLoadTest();
void menuLoadTest();


int main(void)
{
	ingreLoadTest();
	menuLoadTest();
	while(true) {
		int input = 0;
	
		std::cout << "========== Select Operation ===========" << std::endl;
		std::cout << "1. Show Menu" << std::endl;
		std::cout << "2. Edit Menu(Not Work)" << std::endl;
		std::cout << "3. Edit Ingredient(Not Work)" << std::endl;
		std::cout << "0. Exit" << std::endl;
		std::cout << "Input : ";
		std::cin >> input;
		switch (input) {
			case 1:
				showMenu();
				break;
			case 2:
				editMenu();
				break;
			case 3:
				editIngredient();
				break;
			case 0:
				return 0;
			default:
				std::cout << "Wrong input!!" << std::endl;
				break;
		}
	}
	
    
    return 0;
} 

void ingreLoadTest() {
	IngredientManager* instance = IngredientManager::getInstance();
	instance->loadIngredientList("./studyCppTogether/data/ingredient.json");
}

void menuLoadTest() {
	MenuManager* instance = MenuManager::getInstance();
	instance->loadMenuList("./studyCppTogether/data/menu.json");
}

void showMenu() {
	MenuManager *menuInstance = MenuManager::getInstance();
	std::vector<Menu> currentMenuList = menuInstance->getMenuList();
	std::vector<Menu>::iterator iter;
	int i = 1;
	for (iter = currentMenuList.begin(); iter != currentMenuList.end(); ++iter) {
		std::cout << i << ". " << iter->getName() << std::endl;
		i++;
	}
}

void editMenu() {
	std::cout << "Not Developed yet" << std::endl;
}

void editIngredient() {
	std::cout << "Not Developed yet" << std::endl;
}



