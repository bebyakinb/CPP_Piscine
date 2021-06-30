#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(){
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator(){
	std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &other){
	*this = other;
	std::cout << "* teleports from space *" << std::endl;
	//std::cout << "Copy constructor of AssaultTerminator was called" << std::endl;
}

AssaultTerminator 	&AssaultTerminator::operator=(const AssaultTerminator&other){
	(void)other;
	return (*this);
}

ISpaceMarine		*AssaultTerminator::clone() const{
	ISpaceMarine *newMarine = new AssaultTerminator(*this);
	return (newMarine);
}

void				AssaultTerminator::battleCry() const{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void				AssaultTerminator::rangedAttack() const{
	std::cout << "* does nothing *" << std::endl;
}

void				AssaultTerminator::meleeAttack() const{
	std::cout << "* attacks with chainfists *" << std::endl;
}
