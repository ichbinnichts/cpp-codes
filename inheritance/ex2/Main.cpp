#include <iostream>
#include "Character.h"

int main(){
	
	Character char1;
	char1.setName("Mark");
	char1.setEmail("markruffa01@gmail.com");
	char1.setLevel(1);
	
	std::cout << char1.getLevel() << std::endl;
	char1.levelUp();
	std::cout << char1.getLevel() << std::endl;
	char1.levelUp();
	std::cout << char1.getLevel() << std::endl;
	char1.setLevel(0);
	
	std::cout << char1.getLevel() << std::endl;
	char1.levelUp();
	std::cout << char1.getLevel() << std::endl;
	char1.levelUp();
	std::cout << char1.getLevel() << std::endl;
	return 0;
}
