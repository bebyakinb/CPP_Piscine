#include "Zombie.hpp"

Zombie::Zombie(){
	return;
}

Zombie::~Zombie(){
	std::cout << '<' << _name << " (" 
			  << _type << ")> dead" << std::endl;
	return;
}

void Zombie::announce(void) const{
	std::cout << '<' << _name << " (" 
			  << _type << ")> Braiiiiiinnnsss...." << std::endl;
}

void Zombie::setName(const std::string &name){
	_name = name;
}

void Zombie::setType(const std::string &type){
	_type = type;
}

const std::string &Zombie::getName() const{
	return _name;
}

const std::string &Zombie::getType() const{
	return _type;
}
