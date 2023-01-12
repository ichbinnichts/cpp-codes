#include <iostream>
using namespace std;

class Country{
	public:
		void sayHello(){}
};

class Brazil: public Country {
	public:
		void sayHello(){
			cout<< "Oi" <<endl;
		}
};

class UK: public Country {
	public:
		void sayHello(){
			cout <<"Hello" << endl;
		}
};
int main(){
	Brazil bra;
	UK uk;
	
	bra.sayHello();
	uk.sayHello();
	return 0;
}
