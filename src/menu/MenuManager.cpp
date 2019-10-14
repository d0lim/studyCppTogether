#include "MenuManager.h"

using namespace rapidjson;

MenuManager* MenuManager::ins = 0; // or NULL, or nullptr in c++11

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
	IngredientManager *instance = IngredientManager::getInstance();
	std::vector<Ingredient> list = instance->getIngredientList();
	// std::vector<Ingredient> list;
	std::vector<Ingredient>::iterator iter;
	while (true) {
		std::cout << "=== Ingredient Selection ===" << std::endl;
		std::cout << std::endl;
		std::cout << "Current ingredients are .." << std::endl;
		int i = 1;
		for (iter = ingredientList.begin(); iter != ingredientList.end(); ++iter) {
			std::cout << i << ". " << iter->getName() << std::endl;
		}
		std::cout << std::endl;
		
		i = 1;
		int selection = 0;
		std::cout << "Select ingredient to add .." << std::endl;
		for (iter = list.begin(); iter != list.end(); ++iter) {
			std::cout << i << ". " << iter->getName() << std::endl;
		}
		std::cout << "Input(Input 0 to end ingredient selection) : ";
		std::cin >> selection;
		if (selection == 0)
			break;
		else {
			Ingredient temp(list[selection - 1]);
			ingredientList.push_back(temp);
		}
	}
	
	
	
	// calculate price
	iter = ingredientList.begin();
	for (; iter != ingredientList.end(); ++iter) {
		price += iter->getPrice();
	}
	
	// Set discount
	
	
	
	// Make object
	Menu newMenu(name, ingredientList, price, discount);
	menuList.push_back(newMenu);
	
}

void MenuManager::deleteMenu() {
	return ;
}

void MenuManager::loadMenuList(std::string path) {
	std::ifstream file(path);
	std::string data;
	if (file.is_open()) {
		// 위치 지정자를 파일 끝으로 옮긴다.
    file.seekg(0, std::ios::end);

    // 그리고 그 위치를 읽는다. (파일의 크기)
    int size = file.tellg();

    // 그 크기의 문자열을 할당한다.
    data.resize(size);

    // 위치 지정자를 다시 파일 맨 앞으로 옮긴다.
    file.seekg(0, std::ios::beg);

    // 파일 전체 내용을 읽어서 문자열에 저장한다.
    file.read(&data[0], size);
    // std::cout << data << std::endl;
	} else {
    	std::cout << "파일을 찾을 수 없습니다!" << std::endl;
    }
	const char * c = data.c_str();
	// std::cout << c << std::endl;
	Document document;
	document.Parse<0>(c);
	
	if (document.HasParseError())
	{
		std::cout << "Parsing Error!" << std::endl;
		return ;
	}
	assert(document.IsObject());
	
	const Value& jsonMenuList = document["menuList"];
	const char* name;
	unsigned int price;
	unsigned int discount;
	std::vector<Ingredient> ingredientList;
	IngredientManager* instance = IngredientManager::getInstance();
	std::vector<Ingredient>::iterator ingredientIter;
	std::vector<Ingredient> ingredients = instance->getIngredientList();



	for (SizeType i = 0; i < jsonMenuList.Size(); i++) {
		//need to get ingredient by category and name
		// and add those ingredients to new Menu's ingredient List
		ingredientList.clear();
		name = jsonMenuList[i]["name"].GetString();
		std::cout << name << std::endl;
		discount = jsonMenuList[i]["discount"].GetInt();
		std::cout << discount << std::endl;

		for (SizeType j = 0; j < jsonMenuList[i]["ingredientList"].Size(); j++) {
			const char *category, *ingreName;

			category = jsonMenuList[i]["ingredientList"][j]["category"].GetString();
			ingreName = jsonMenuList[i]["ingredientList"][j]["name"].GetString();
			// search ingredient list
			for (ingredientIter = ingredients.begin(); ingredientIter != ingredients.end(); ++ingredientIter) {
				if (ingredientIter->getCategory() == category && ingredientIter->getName() == ingreName) {
					ingredientList.push_back(*ingredientIter);
				}
			}
			
			
		}
		// calculate price
		price = 0;
		for (ingredientIter = ingredientList.begin(); ingredientIter != ingredientList.end(); ++ingredientIter) {
			price += ingredientIter->getPrice();
		}
		Menu newMenu(name, ingredientList, price, discount);
		std::cout << "===========" << std::endl;
		std::cout << "Name : " << name << std::endl;
		std::cout << "Price : " << price << std::endl;
		std::cout << "===========" << std::endl;
		menuList.push_back(newMenu);
		
	}

	
}

void MenuManager::saveMenuList(std::string path) {
	return ;
}

