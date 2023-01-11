#include <iostream>


class Person{
	public:
		Person(){
			this->name = "";
			this->age = 0;
		}
		Person(std::string name, int age){
			this->name = name;
			this->age = age;
		}
		std::string name;
		int age;
};

int main(){
	Person person1("John", 30);
	
	std::cout << person1.name <<std::endl;
	std::cout << person1.age;
	return 0;
}
