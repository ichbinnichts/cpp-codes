#include "Animal.h"

class Dog: public Animal{
	private:
		std::string race;
	public:
		Dog(){
		}
		Dog(std::string name, int age, std::string race){
			this->setName(name);
			this->setAge(age);
			this->race = race;
		}
		std::string getRace(){
			return this->race;
		}
		void setRace(std::string race){
			this->race = race;
		}
};
