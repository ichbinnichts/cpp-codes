class User{
	private:
		std::string name;
		std::string email;
	public:
		User(){
		}
		User(std::string name, std::string email){
			this->name = name;
			this->email = email;
		}
		std::string getName(){
			return this->name;
		}
		void setName(std::string name){
			this->name = name;
		}
		std::string getEmail(){
			return this->email;
		}
		void setEmail(std::string email){
			this->email = email;
		}
};
