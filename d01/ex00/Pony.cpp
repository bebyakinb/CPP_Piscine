#include "Pony.hpp"

Pony::Pony(std::string name, int igogo_num){
	_name = name;
	if (igogo_num < 2)
		igogo_num = 2;
	else if (igogo_num > 15)
		igogo_num = 15;
	_igogo_num = igogo_num;
	std::cout << "Pony \"" << name << "\" was created!" << std::endl;
}

Pony::~Pony(){
	std::cout << "Pony \"" << _name << "\" was destroyed!" << std::endl;
}

void	Pony::igogo() const{
	int i;

	i = 0;
	std::cout << "<" <<_name << ">: I";
	while (i < _igogo_num){
		std::cout << "Go";
		i++;
	}
	std::cout << std::endl;
}