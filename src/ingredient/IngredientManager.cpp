#include "IngredientManager.h"

using namespace rapidjson;

IngredientManager* IngredientManager::ins = 0; // or NULL, or nullptr in c++11

std::vector<Ingredient> IngredientManager::getIngredientList() {
	return ingredientList;
}
void IngredientManager::setIngredientList(std::vector<Ingredient> ingredientList) {
	this->ingredientList = ingredientList;
}

std::vector<std::string> IngredientManager::getCategoryList() {
    return categoryList;
}
void IngredientManager::setCategoryList(std::vector<std::string> categoryList) {
    this->categoryList = categoryList;
}

void IngredientManager::addCategory() {
    std::string newCategory;
    std::cout << "Input new category: ";
    std::cin >> newCategory;
    categoryList.push_back(newCategory);
}

void IngredientManager::addCategory(std::string newCategory) {
	categoryList.push_back(newCategory);
}

void IngredientManager::removeCategory() {
    return ;
}

void IngredientManager::addIngredient() {
    std::string category;
    int selection = 0;
	std::string name;
	unsigned int price = 0;
	unsigned int count = 1;
	
	std::vector<std::string>::iterator iter;
    int i = 1;
    for (iter = categoryList.begin(); iter != categoryList.end(); ++iter) {
        std::cout << i << ". " << *iter << std::endl;
    }
    std::cout << "Select Category : ";
    std::cin >> selection;
    category = categoryList[selection - 1];
	std::cout << "Input name : ";
	std::cin >> name;
	std::cout << "Input price : ";
	std::cin >> price;
	/* Wonder whether we need count on ingredient class. */
	// std::cout << "Input count : ";
	// std::cin >> count;
	
	Ingredient newIngredient(category, name, price, count);
	ingredientList.push_back(newIngredient);
}

void IngredientManager::addIngredient(std::string category, std::string name, unsigned int price) {
	Ingredient newIngredient(category, name, price, 1);
	ingredientList.push_back(newIngredient);
}

void IngredientManager::removeIngredient() {
	return ;
}

void IngredientManager::saveIngredientList(std::string path) {
	return ;
	// std::ofstream out(path);

	// std::string s;
	// if (out.is_open()) {
	// out << "이걸 쓰자~~";
	// }
}

void IngredientManager::loadIngredientList(std::string path) {
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
	
	// printf("%s\n", document["CoffeeBean"][0]["name"].GetString());
	
	rapidjson::Value::MemberIterator    iter;
	const char                          *category, *name;
	unsigned int price;


	// Get ingredients and add to ingreList
	// Loop by the key.
	for (iter = document.MemberBegin(); iter != document.MemberEnd(); iter++)
	{
		category   = iter->name.GetString();
		
		if (category!=NULL)
		{
			printf("%s\n", category);
			addCategory(category);
			for (SizeType i = 0; i < (iter->value).Size(); i++) {
				printf("%s - %s - %d\n", category, (iter->value)[i]["name"].GetString(), (iter->value)[i]["price"].GetInt());
				addIngredient(category, (iter->value)[i]["name"].GetString(), (iter->value)[i]["price"].GetInt());
			}
		}
	}
	
	
	
	
	

}

