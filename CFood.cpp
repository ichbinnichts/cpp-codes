#include <iostream>
#include <ios>
#include <limits>

class Food{
	public:
		std::string name;
		std::string flavour;
};

int main(){
	Food food1;
	
	std::cout <<"Type the name of the food: ";
	std::cin >> food1.name;
	
	std::cout <<"Type the flavour of the food: ";
	std::cin >> food1.flavour;
	
	std::cout << "The name of the food is " << food1.name << "\nThe flavour of the food is " << food1.flavour;
	return 0;
}
