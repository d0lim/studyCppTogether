#include "IngredientManager.h"


static IngredientManager::IngredientManager& instance() {
	static IngredientManager* instance = new IngredientManager;
	return instance;
}
// class IngredientManager {
// public:
// 	static IngredientManager& instance() {
// 		static IngredientManager* instance = new IngredientManager;
// 		return instance;
// 	}
	
// 	std::vector<Milk> getMilkList();
// 	void setMilkList(std::vector<Milk> milkList);
// 	std::vector<CoffeeBean> getCoffeeBeanList();
// 	void setCoffeeBeanList(std::vector<CoffeeBean> coffeeBeanList);
// 	std::vector<OtherIngredient> getOtherIngredientList();
// 	void setOtherIngredientList(std::vector<OtherIngredient> otherIngredientList);
// 	void addCoffeeBean();
// 	void removeCoffeeBean();
// 	void addMilk();
// 	void removeMilk();
// 	void addOtherIngredient();
// 	void removeOtherIngredient();
	
	
// private:
// 	IngredientManager() {}
// 	std::vector<Milk> milkList;
// 	std::vector<CoffeeBean> coffeeBeanList;
// 	std::vector<OtherIngredient> otherIngredientList;
	
// };


std::vector<Milk> IngredientManager::getMilkList() {
	return milkList;
}
void IngredientManager::setMilkList(std::vector<Milk> milkList) {
	this->milkList = milkList;
}
std::vector<CoffeeBean> IngredientManager::getCoffeeBeanList() {
	return coffeeBeanList;
}
void IngredientManager::setCoffeeBeanList(std::vector<CoffeeBean> coffeeBeanList) {
	this->coffeeBeanList = coffeeBeanList;
}
std::vector<OtherIngredient> IngredientManager::getOtherIngredientList() {
	return otherIngredientList;
}
void IngredientManager::setOtherIngredientList(std::vector<OtherIngredient> otherIngredientList) {
	this->otherIngredientList = otherIngredientList;
}
void IngredientManager::addCoffeeBean() {
	std::string name;
	unsigned int price = 0;
	unsigned int count = 1;
	
	
	std::cout << "Input name : ";
	std::cin >> name;
	std::cout << "Input price : ";
	std::cin >> price;
	/* Wonder whether we need count on ingredient class. */
	// std::cout << "Input count : ";
	// std::cin >> count;
	
	CoffeeBean newCoffeeBean(name, price, count);
	coffeeBeanList.push_back(newCoffeeBean);
}
void IngredientManager::removeCoffeeBean() {
	return ;
}
void IngredientManager::addMilk() {
	std::string name;
	unsigned int price = 0;
	unsigned int count = 1;
	
	
	std::cout << "Input name : ";
	std::cin >> name;
	std::cout << "Input price : ";
	std::cin >> price;
	/* Wonder whether we need count on ingredient class. */
	// std::cout << "Input count : ";
	// std::cin >> count;
	
	Milk newMilk(name, price, count);
	milkList.push_back(newMilk);
}
void IngredientManager::removeMilk() {
	return ;
}
void IngredientManager::addOtherIngredient() {
	std::string name;
	unsigned int price = 0;
	unsigned int count = 1;
	
	
	std::cout << "Input name : ";
	std::cin >> name;
	std::cout << "Input price : ";
	std::cin >> price;
	/* Wonder whether we need count on ingredient class. */
	// std::cout << "Input count : ";
	// std::cin >> count;
	
	OtherIngredient newOtherIngredient(name, price, count);
	OtherIngredientList.push_back(newOtherIngredient);
}
void IngredientManager::removeOtherIngredient() {
	return ;
}