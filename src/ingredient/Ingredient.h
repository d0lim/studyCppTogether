#ifndef INGREDIENT_H

#define INGREDIENT_H

// Input your code here... ex) #include <iostream>
#include <string>

class Ingredient {
public:    
    Ingredient(std::string _category, std::string _name, unsigned int _price, unsigned int _count);
    Ingredient(std::string _name, unsigned int _price, unsigned int _count);
    std::string getCategory();
	void setCategory(std::string category);
	std::string getName();
	void setName(std::string name);
	unsigned int getPrice();
	void setPrice(unsigned int price);
	unsigned int getCount();
	void setCount(unsigned int count);
	void addCount(int addNum);
	void reduceCount(int reduceNum);
	
protected:
    std::string category;
	std::string name;
	unsigned int price;
	unsigned int count;
};


#endif