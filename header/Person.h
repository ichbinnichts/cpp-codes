class Person{
	private:
		std::string name;
		int age;
	public:
		std::string getName(){
			return this->name;
		}	
		void setName(std::string name){
			this->name = name;
		}
		int getAge(){
			return this->age;
		}
		void setAge(int age){
			this->age = age;
		}
};
