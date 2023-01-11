#include "Animal.h"

class Mammal: public Animal{
	private:
		int monthsBorn;
	public:
		int getMonthsBorn(){
			return this->monthsBorn;
		}
		void setMonthsBorn(int monthsBorn){
			this->monthsBorn = monthsBorn;
		}
};
