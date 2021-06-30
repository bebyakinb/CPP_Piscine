#include "Peon.hpp"

Peon::Peon(){
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string const &name) : Victim(name){
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &other){
	*this = other;
}

Peon 		&Peon::operator=(Peon const &other){
	(void)other;
	return *this;
}

Peon::~Peon(){
	std::cout << "Bleuark..." << std::endl;
}

void				Peon::getPolymorphed() const{
	std::cout << _name << " has been turned into a pink pony!"
			  << std::endl;
}
