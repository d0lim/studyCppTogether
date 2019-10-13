#include "./menu/MenuManager.h"
#include "./ingredient/IngredientManager.h"

void showMenu();
void editMenu();
void editIngredient();
void fileLoadTest();


int main(void)
{
	// while(true) {
	// 	int input = 0;
	
	// 	std::cout << "========== Select Operation ===========" << std::endl;
	// 	std::cout << "1. Show Menu" << std::endl;
	// 	std::cout << "2. Edit Menu" << std::endl;
	// 	std::cout << "3. Edit Ingredient" << std::endl;
	// 	std::cout << "0. Exit" << std::endl;
	// 	std::cout << "Input : ";
	// 	std::cin >> input;
	// 	switch (input) {
	// 		case 1:
	// 			showMenu();
	// 			break;
	// 		case 2:
	// 			editMenu();
	// 			break;
	// 		case 3:
	// 			editIngredient();
	// 			break;
	// 		default:
	// 			std::cout << "Wrong input!!" << std::endl;
	// 			break;
	// 	}
	// }
	fileLoadTest();
    
    return 0;
} 

void fileLoadTest() {
	IngredientManager* instance = IngredientManager::getInstance();
	instance->loadIngredientList("./studyCppTogether/data/ingredient.json");
}

void showMenu() {
	MenuManager *menuInstance = MenuManager::getInstance();
	std::vector<Menu> currentMenuList = menuInstance->getMenuList();
	std::vector<Menu>::iterator iter;
	int i = 1;
	for (iter = currentMenuList.begin(); iter != currentMenuList.end(); ++iter) {
		std::cout << i << ". " << iter->getName() << std::endl;
	}
}

void editMenu() {
	
}

void editIngredient() {
	
}




// using namespace rapidjson;
// using namespace std;

// int main(int, char*[]) {
//     const char json[] = " { \"hello\" : \"world\", \"t\" : true , \"f\" : false, \"n\": null, \"i\":123, \"pi\": 3.1416, \"a\":[1, 2, 3, 4] } ";
//     Document document;  // Default template parameter uses UTF8 and MemoryPoolAllocator.
//     // In-situ parsing, decode strings directly in the source string. Source must be string.
//     char buffer[sizeof(json)];
//     memcpy(buffer, json, sizeof(json));
//     if (document.ParseInsitu(buffer).HasParseError())
//         return 1;

//     printf("\nParsing to document succeeded.\n");

//     printf("\nAccess values in document:\n");
//     assert(document.IsObject());    // Document is a JSON value represents the root of DOM. Root can be either an object or array.

//     assert(document.HasMember("hello"));
//     assert(document["hello"].IsString());
//     printf("hello = %s\n", document["hello"].GetString());

//     // Since version 0.2, you can use single lookup to check the existing of member and its value:
//     Value::MemberIterator hello = document.FindMember("hello");
//     assert(hello != document.MemberEnd());
//     assert(hello->value.IsString());
//     assert(strcmp("world", hello->value.GetString()) == 0);
//     (void)hello;

//     assert(document["t"].IsBool());     // JSON true/false are bool. Can also uses more specific function IsTrue().
//     printf("t = %s\n", document["t"].GetBool() ? "true" : "false");

//     assert(document["f"].IsBool());
//     printf("f = %s\n", document["f"].GetBool() ? "true" : "false");

//     printf("n = %s\n", document["n"].IsNull() ? "null" : "?");

//     assert(document["i"].IsNumber());   // Number is a JSON type, but C++ needs more specific type.
//     assert(document["i"].IsInt());      // In this case, IsUint()/IsInt64()/IsUInt64() also return true.
//     printf("i = %d\n", document["i"].GetInt()); // Alternative (int)document["i"]

//     assert(document["pi"].IsNumber());
//     assert(document["pi"].IsDouble());
//     printf("pi = %g\n", document["pi"].GetDouble());

//     {
//         const Value& a = document["a"]; // Using a reference for consecutive access is handy and faster.
//         assert(a.IsArray());
//         for (SizeType i = 0; i < a.Size(); i++) // rapidjson uses SizeType instead of size_t.
//             printf("a[%d] = %d\n", i, a[i].GetInt());

//         int y = a[0].GetInt();
//         (void)y;

//         // Iterating array with iterators
//         printf("a = ");
//         for (Value::ConstValueIterator itr = a.Begin(); itr != a.End(); ++itr)
//             printf("%d ", itr->GetInt());
//         printf("\n");
//     }
// }




