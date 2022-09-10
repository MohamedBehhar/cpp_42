#include <iostream>

class Human{
	private:
		std::string *_name;
	public:
		Human(){};
		Human(std::string name){
			std::cout << "para" << std::endl;
			_name = new std::string(name);
		};
		Human(const Human &other){
			std::cout << "copy" << std::endl;
			this->_name = new std::string(*(other._name));
		};
		void operator= (const Human &rhs){
			std::cout << "copy ass" << std::endl;
			delete this->_name;
			this->_name =  new std::string(*(rhs._name));
		};
		~Human(){
			std::cout << "des" << std::endl;
			delete _name;
		};
		void getName(void){
			std::cout << *(_name) << std::endl;
		};
};

int main(){
	{
		Human a("Ahmad");
		Human b("ali");
		a.getName();
		b.getName();
		a = b;
		a.getName();
		b.getName();
	}
	while (1)
	{
		/* code */
	}
	
}