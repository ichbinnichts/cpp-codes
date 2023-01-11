#include <iostream>
#include "Dog.h"

int main(){
	
	Dog dog1("Home", 6, "Pitbull");
	Dog dog2;
	
	dog2.setLand("Home");
	dog2.setMonthsBorn(6);
	dog2.setRace("Bulldog");
	
	std::cout << dog1.getLand() << std::endl;
	std::cout << dog1.getMonthsBorn() << std::endl;
	std::cout << dog1.getRace() << std::endl;
	
	std::cout << dog2.getLand() << std::endl;
	std::cout << dog2.getMonthsBorn() << std::endl;
	std::cout << dog2.getRace() << std::endl;
	return 0;
}
