#ifndef INGREDIENTMANAGER_H

#define INGREDIENTMANAGER_H

// Input your code here... ex) #include <iostream>
#include <fstream>
#include <iostream>
#include <vector>
#include "Ingredient.h"
#include "../../lib/rapidjson/include/rapidjson/document.h"     // rapidjson's DOM-style API
#include "../../lib/rapidjson/include/rapidjson/prettywriter.h" // for stringify JSON


class IngredientManager {
public:
	
	std::vector<Ingredient> getIngredientList();
	void setIngredientList(std::vector<Ingredient> ingredientList);
    std::vector<std::string> getCategoryList();
    void setCategoryList(std::vector<std::string> categoryList);
	
	void addIngredient();
	void removeIngredient();
    void addCategory();
    void removeCategory();
	static IngredientManager* getInstance()
    {
		if (!ins) {
			ins = new IngredientManager();
		}
        return ins;
    }
	
	void saveIngredientList(std::string path);
	void loadIngredientList(std::string path);





	
private:

	IngredientManager(){}
    IngredientManager(const IngredientManager& other){}
    ~IngredientManager(){}
	static IngredientManager* ins;
	std::vector<Ingredient> ingredientList;
	std::vector<std::string> categoryList;
};





#endif