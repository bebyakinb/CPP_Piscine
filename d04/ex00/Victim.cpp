#include "Victim.hpp"

Victim::Victim(){
	_name = "mouse";
	std::cout << "Some random victim called " << _name
			  << " just appeared!" << std::endl;
}

Victim::Victim(std::string const &name) : _name(name){
	std::cout << "Some random victim called " << _name
			  << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &other){
	*this = other;
}

Victim 		&Victim::operator=(const Victim&other){
	if (this == &other)
		return *this;
	this->_name = other._name;
	return *this;
}

Victim::~Victim(){
	std::cout << "Victim " <<  _name << " just died for no apparent reason!"
			  << std::endl;
}

const std::string	&Victim::getName() const{
	return _name;
}

void				Victim::getPolymorphed() const{
	std::cout << _name << " has been turned into a cute little sheep!"
			  << std::endl;
}

std::ostream&		operator<<(std::ostream& os, const Victim &person){
	os << "I am " << person.getName() << " and I like otters!" << std::endl;
	return(os);
}
