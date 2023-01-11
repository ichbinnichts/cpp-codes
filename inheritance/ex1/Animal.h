class Animal{
	private:
		std::string land;
	public:
		std::string getLand(){
			return this->land;
		}
		void setLand(std::string land){
			this->land = land;
		}
};
