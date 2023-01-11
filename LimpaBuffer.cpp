#include <iostream>
#include <ios>
#include <limits>

int main(){
	char phrase[85];
	std::cout << "Type a phrase here: ";
	std::cin.sync();
	std::cin.getline(phrase, 85);
	
	std::cout << "Your phrase: " << phrase << std::endl;
	
	std::cout << "Type another phrase here: ";
	std::cin.sync();
	std::cin.getline(phrase, 85);
	
	std::cout << "Your other phrase: " << phrase << std::endl;
	return 0;
}

