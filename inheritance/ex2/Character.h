#include "User.h"

class Character: public User{
	private:
		int level;
	public:
		int getLevel(){
			return this->level;
		}
		void setLevel(int level){
			this->level = level;
		}
		void levelUp(){
			this->level++;
		}
};
