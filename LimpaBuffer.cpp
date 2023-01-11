#include <iostream>


class Person{
	public:
		int age;
		std::string name;
};

int main(){
	Person person1;
	person1.name = "John";
	person1.age = 20;
	
	std::cout << "Person age: "<< person1.age; << std::endl;
	std::cout << "Person name: "<< person1.name;
	return 0;
}

