#include <iostream>

class Animal{
	private:
		std::string name;
		std::string race;
		int age;
	public:
		Animal(){
			
		}
		Animal(std::string name, std::string race, int age){
			this->name = name;
			this->race = race;
			this->age = age;
		}
		std::string getName(){
			return this->name;
		}
		void setName(std::string name){
			this->name = name;
		}
		
		std::string getRace(){
			return this->race;
		}
		void setRace(std::string race){
			this->race = race;
		}
		int getAge(){
			return this->age;
		}
		void setAge(int age){
			this->age = age;
		}
};

int main(){
	
	Animal dog;
	dog.setName("Auau");
	dog.setRace("Dog");
	dog.setAge(5);
	
	std::cout << dog.getName() <<std::endl;
	std::cout << dog.getRace() <<std::endl;
	std::cout << dog.getAge() <<std::endl;
	return 0;
}
