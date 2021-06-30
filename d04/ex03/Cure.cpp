#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){}

Cure::~Cure(){}

Cure::Cure(const Cure &other) : AMateria("cure"){
	*this = other;
	//std::cout << "Copy constructor of Cure was called" << std::endl;
}

Cure 		&Cure::operator=(const Cure&other){
	if (this != &other)
		AMateria::operator=(other);
	return (*this);
}

AMateria		*Cure::clone() const{
	AMateria *newMarine = new Cure(*this);
	return (newMarine);
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	AMateria::use(target);
}
