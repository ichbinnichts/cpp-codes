#include <iostream>
#include "Dog.h"


int main(){
	Dog dog1("John", 4, "Bulldog");
	Dog dog2;
	
	dog2.setName("Mark");
	dog2.setAge(5);
	dog2.setRace("Pitbull");
	
	std::cout << dog1.getName() << std::endl;
	std::cout << dog1.getAge() << std::endl;
	std::cout << dog1.getRace() << std::endl;
	
	std::cout << std::endl;
	
	std::cout << dog2.getName() << std::endl;
	std::cout << dog2.getAge() << std::endl;
	std::cout << dog2.getRace() << std::endl;
	return 0;
}
