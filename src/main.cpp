#include <iostream>
#include "./menu/MenuManager.h"
#include "./ingredient/IngredientManager.h"

void showMenu();
void editMenu();
void editIngredient();


int main(void)
{
	while(true) {
		int input = 0;
	
		std::cout << "========== Select Operation ===========" << std::endl;
		std::cout << "1. Show Menu" << std::endl;
		std::cout << "2. Edit Menu" << std::endl;
		std::cout << "3. Edit Ingredient" << std::endl;
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
			default:
				std::cout << "Wrong input!!" << std::endl;
				break;
		}
	}
	
    
    return 0;
}                                                              

void showMenu() {
	// MenuManager instance = MenuManager.instance();
}

void editMenu() {
	
}

void editIngredient() {
	
}




