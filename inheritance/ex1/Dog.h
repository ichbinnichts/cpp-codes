#include "Mammal.h"

class Dog: public Mammal{
	private:
		std::string race;
	public:
		Dog(){
		}
		Dog(std::string land, int monthsBorn, std::string race){
			this->setLand(land);
			this->setMonthsBorn(monthsBorn);
			this->setRace(race);
		}
		std::string getRace(){
			return this->race;
		}
		void setRace(std::string race){
			this->race = race;
		}
};
