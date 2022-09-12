#include <iostream>

class Human{
	private:
		std::string *_name;
	public:
		Human(){
			_name = NULL;
		}
		Human(std::string name){
			std::cout << "para" << std::endl;
			_name = new std::string(name);
		}
		Human(const Human &other){
			std::cout << "copy" << std::endl;
			this->_name = new std::string(*(other._name));
		}
		void operator= (const Human &rhs){
			std::cout << "copy ass" << std::endl;
			if (!_name)
				delete this->_name;
			this->_name =  new std::string(*(rhs._name));
		}
		~Human(){
			std::cout << "des" << std::endl;
			if (!_name)
				delete _name;
		}
		std::string getName(void){
			// std::cout << *(_name) << std::endl;
			return (*_name);
		}
};

class Employ: public Human{
	private:
		std::string _func;
	public:
		Employ(){
			_func = "";
		}
		Employ(std::string name) : Human(name)
		{
		}
		void print()
		{
			std::cout << _func << std::endl;
		}
};

int main(){

	Employ a("ali");

	std::cout << a.getName() << std::endl;

	// {
	// 	Human a;
	// 	Human b = ("alal");
	// 	b = a;
	// 	// a.getName();
	// 	// b.getName();
	// 	// a = b;
	// 	// a.getName();
	// 	// b.getName();
	// }
	// while (1)
	// {
	// 	/* code */
	// }
	
}