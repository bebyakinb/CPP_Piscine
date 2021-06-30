#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){}

Ice::~Ice(){}

Ice::Ice(const Ice &other) : AMateria("ice"){
	*this = other;
	//std::cout << "Copy constructor of Ice was called" << std::endl;
}

Ice 		&Ice::operator=(const Ice&other){
	if (this != &other)
		AMateria::operator=(other);
	return (*this);
}

AMateria		*Ice::clone() const{
	AMateria *newMarine = new Ice(*this);
	return (newMarine);
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"
			  << std::endl;
	AMateria::use(target);
}