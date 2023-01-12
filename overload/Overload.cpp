#include <iostream>

class Calc{
	public:
		int sum(int a, int b, int c){
			return a+b+c;
		}
		int sum(int a, int b){
			return a+b;
		}
};

int main(){
	Calc calc;
	std::cout << calc.sum(1,2) <<std::endl;
	std::cout << calc.sum(1,2,3) <<std::endl;
	return 0;
}
