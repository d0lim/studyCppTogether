#ifndef INGREDIENT_H

#define INGREDIENT_H

// Input your code here... ex) #include <iostream>
#include <string>

class Ingredient {
public:
	virtual std::string getName() = 0;
	virtual void setName(std::string name) = 0;
	virtual unsigned int getPrice() = 0;
	virtual void setPrice(unsigned int price) = 0;
	virtual unsigned int getCount() = 0;
	virtual void setCount(unsinged int count) = 0;
	virtual void addCount(int addNum) = 0;
	virtual void reduceCount(int reduceNum) = 0;
	
private:
	std::string name;
	unsigned int price;
	unsigned int count;
};


#endif