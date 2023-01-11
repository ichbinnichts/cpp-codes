#include <iostream>
#include "Person.h"

int main(){
	Person person1;
	
	person1.setName("John");
	person1.setAge(30);
	
	std::cout <<person1.getName() <<std::endl;
	std::cout <<person1.getAge();
	return 0;
}
