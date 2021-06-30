#include "OldPeon.hpp"

OldPeon::OldPeon(){
	std::cout << "Flog Flog." << std::endl;
}

OldPeon::OldPeon(std::string const &name) : Victim(name){
	std::cout << "Flog Flog." << std::endl;
}

OldPeon::OldPeon(const OldPeon &other){
	*this = other;
}

OldPeon 		&OldPeon::operator=(OldPeon const &other){
	(void)other;
	return *this;
}

OldPeon::~OldPeon(){
	std::cout << "Bleuarkkkkkk..." << std::endl;
}

void				OldPeon::getPolymorphed() const{
	std::cout << _name << " has been turned into a old pink pony!"
			  << std::endl;
}
